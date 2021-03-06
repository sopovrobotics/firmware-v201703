#ifndef INTERFACES_IWEBSOCKETSERVER_H
#define INTERFACES_IWEBSOCKETSERVER_H

#include <QJsonObject>
#include <QWebSocket>
// #include "icmdhandler.h"

class IWebSocketServer {
	public:
		virtual void sendMessage(QWebSocket *pClient, QJsonObject obj) = 0;
		virtual void sendMessage(QWebSocket *pClient, const QByteArray &data) = 0;
		virtual void turnleft() = 0;
		virtual void turnright() = 0;
		virtual void forward() = 0;
		virtual void backward() = 0;
		virtual void stop() = 0;
		virtual void start_auto() = 0;
		virtual void stop_auto() = 0;
		virtual void check_lets() = 0;
		virtual bool let0() = 0;
		virtual bool let1() = 0;
		virtual bool let2() = 0;
};

#endif // INTERFACES_IWEBSOCKETSERVER_H
