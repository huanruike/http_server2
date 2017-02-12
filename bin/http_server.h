#ifndef HTTP_SERVER_H
#define HTTP_SERVER_H

class http_server{
public:
	void start(char *port); //服务器启动
	void run();// 运行，接收来自客户端的请求, accept后再建一个对象去处理请求

private:
	int sock;
	sockaddr_in addr;

};

#endif

	
