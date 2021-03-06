/*
 * =====================================================================================
 *
 *       Filename:  c.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  05/20/2013 02:28:41 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Fan Liao (), liaofan8@gmail.com
 *   Organization:  BST
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stddef.h>
#include <sys/stat.h>
#include <sys/socket.h>
#include <sys/un.h>
#include <errno.h>
#include <unistd.h>

#define CLI_PATH "/var/tmp/"
#define MAXLINE 80
/*  +5 for pid = 14 chars */
/*
 * * Create a client endpoint and connect to a server.
 * * Returns fd if all OK, <0 on error.
 * */
int cli_conn(const char *name)
{
	int fd, len, err, rval;
	struct sockaddr_un un;
	/*  create a UNIX domain stream socket */
	if ((fd = socket(AF_UNIX, SOCK_STREAM, 0)) < 0)
		return(-1);
	/*  fill socket address structure with our address */
	memset(&un, 0, sizeof(un));
	un.sun_family = AF_UNIX;
	sprintf(un.sun_path, "%s%05d", CLI_PATH, getpid());
	len = offsetof(struct sockaddr_un, sun_path) +
		strlen(un.sun_path);
	unlink(un.sun_path);
	/*  in case it already exists */
	if (bind(fd, (struct sockaddr *)&un, len) < 0) {
		rval = -2;
		goto errout;
	}
	/*  fill socket address structure with server's address */
	memset(&un, 0, sizeof(un));
	un.sun_family = AF_UNIX;
	strcpy(un.sun_path, name);
	len = offsetof(struct sockaddr_un, sun_path) + strlen(name);
	if (connect(fd, (struct sockaddr *)&un, len) < 0) {
		rval = -4;
		goto errout;
	}
	return(fd);
errout:
	err = errno;
	close(fd);
	errno = err;
	return(rval);
}

int main(void)
{
	int fd, n;
	char buf[MAXLINE];
	fd=cli_conn("server.foo");
	while (fgets(buf, MAXLINE, stdin) != NULL) {
			write(fd, buf, strlen(buf));
			n = read(fd, buf, MAXLINE);
			if (n == 0)
				printf("the other side has been closed.\n");
			else
				write(STDOUT_FILENO, buf, n);
		}
		close(fd);
		return 0;

}
