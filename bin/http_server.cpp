#ifndef HTTP_SERVER_H
#define HTTP_SERVER_H

#include"headfile.h"
#include"http_server.h"
#include"error_deal.h"

//建立sock，绑定端口地址，并监听端口port
void http_server::start(char *port){
	sock=socket(AF_INET,SOCK_STREAM,0);
	if(this->sock==-1) error_deal::add_error("server socket() error!");

	memset(&addr,0,sizeof(addr));
	addr.sin_family=AF_INET;
	addr.sin_addr.s_addr=htonl(INADDR_ANY);
	addr.sin_port=htons(atoi(port));

	if(bind(sock,(sockaddr*)&addr,sizeof(addr))==-1)
		error_deal::add_error("server bind() error!");
	if(listen(sock,30)==-1) error_deal::add_error("listen() error!");
}

