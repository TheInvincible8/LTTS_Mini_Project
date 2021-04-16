#include "header.h"
#include<stdio.h>
#include<winsock2.h>

int sConnection(){
	SOCKET s;
	struct sockaddr_in server;
    server.sin_addr.s_addr = inet_addr("74.125.235.20");
	server.sin_family = AF_INET;
	server.sin_port = htons( 80 );

	//Connect to remote server
	if (connect(s , (struct sockaddr *)&server , sizeof(server)) > 0)
	{
		puts("connection error");
		return 0;
	}

	puts("Connected");
	return 1;
	
	
}