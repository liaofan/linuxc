/*
 * =====================================================================================
 *
 *       Filename:  s1.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  05/14/2013 11:31:51 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Fan Liao (), liaofan8@gmail.com
 *   Organization:  BST
 *
 * =====================================================================================
 */

/*  server.c */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <ctype.h>
#include <errno.h>
#include "wrap.h"
#define MAXLINE 80
#define SERV_PORT 8000
int main(void)
{
	struct sockaddr_in servaddr, cliaddr;
	socklen_t cliaddr_len;
	int listenfd, connfd;
	char buf[MAXLINE];
	char str[INET_ADDRSTRLEN];
	int i, n;
	listenfd = socket(AF_INET, SOCK_STREAM, 0);
	bzero(&servaddr, sizeof(servaddr));
	servaddr.sin_family = AF_INET;
	servaddr.sin_addr.s_addr = htonl(INADDR_ANY);
	servaddr.sin_port = htons(SERV_PORT);
	Bind(listenfd, (struct sockaddr *)&servaddr,
			sizeof(servaddr));
	Listen(listenfd, 20);
	printf("Accepting connections ...\n");
	while (1) {
		cliaddr_len = sizeof(cliaddr);
		connfd = Accept(listenfd,
				(struct sockaddr *)&cliaddr,
				&cliaddr_len);
		while (1) {
			n = Read(connfd, buf, MAXLINE);
			if (n == 0) {
				printf("the other side has been	 closed.\n");
				break;
			}
			printf("received from %s at PORT %d\n",
					inet_ntop(AF_INET, &cliaddr.sin_addr,
						str, sizeof(str)),
					ntohs(cliaddr.sin_port));
			for (i = 0; i < n; i++)
				buf[i] = toupper(buf[i]);
			Write(connfd, buf, n);
		}
		Close(connfd);
	}
}
