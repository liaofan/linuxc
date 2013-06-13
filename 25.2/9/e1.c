/*
 * =====================================================================================
 *
 *       Filename:  e1.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/31/2013 02:55:09 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Fan Liao (), liaofan8@gmail.com
 *   Organization:  BST
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <stdarg.h>
#include <string.h>
#define MAXLINE 80
void err_sys(const char *fmt, ...)
{
	int err = errno;
	char buf[MAXLINE+1];
	va_list ap;
	va_start(ap, fmt);
	vsnprintf(buf, MAXLINE, fmt, ap);
	snprintf(buf+strlen(buf), MAXLINE-strlen(buf), ":%s", strerror(err));
	strcat(buf, "\n");
	fputs(buf, stderr);
	va_end(ap);
	exit(1);
}
int main(int argc, char *argv[])
{
	FILE *fp;
	if (argc != 2) {
		fputs("Usage: ./a.out pathname\n",
				stderr);
		exit(1);
	}
	fp = fopen(argv[1], "r");

	if (fp == NULL) {
		err_sys("Line %d - Open file %s", __LINE__, argv[1]);
		printf("Open %s OK\n", argv[1]);
		fclose(fp);
		return 0;
	}
}
