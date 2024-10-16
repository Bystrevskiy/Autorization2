#include "server.h"
#include <QDataStream>
Server::Server(){
    if(this->listen(QHostAddress::Any, 3702)){
        qDebug() << "start";
    }
    else{
        qDebug() << "error";
    }
}

void Server::incomingconnection(qintptr socketDescriptor)
{
    socket = new QTcpSocket;
    socket->setSocketDescriptor(socketDescriptor);

    connect(socket, &QTcpSocket::readyRead, this, &Server::slotReadyRead);
    connect(socket, &QTcpSocket::disconnected, socket, &QTcpSocket::deleteLater);

    Sockets.push_back(socket);
    qDebug()<<"clietn connected" << socketDescriptor;
}

void Server::slotReadyRead(){
    socket = (QTcpSocket*)sender();
    QDataStream in(socket);
    in.setVersion(QDataStream::Qt_5_15);
    if(in.status() == QDataStream::Ok)
    {
        qDebug() << "read....";
        QString str;
        in >> str;
        qDebug() << str;
        SendToClient(str);
    }
    else{
        qDebug() << "DataStream error";
    }
}

void Server::SendToClient(QString str){
    Data.clear();
    QDataStream out(&Data, QIODevice::WriteOnly);
    out.setVersion(QDataStream::Qt_5_15);
    out  << str;
    // socket->write(Data);
    for(int i = 0; i< Sockets.size(); i++){
        qDebug() << "Sending: " << str;
        Sockets[i]->write(Data);
    }
}
