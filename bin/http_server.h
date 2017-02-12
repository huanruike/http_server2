#ifndef HTTP_SERVER_H
#define HTTP_SERVER_H

class http_server{
public:
	void start(char *ip,char *port); //服务器启动
	void run();// 运行，接收来自客户端的请求

private:
	void response(int clnt_sock);

};

#endif

	
