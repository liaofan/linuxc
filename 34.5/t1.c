/*
 * =====================================================================================
 *
 *       Filename:  t1.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/28/2013 05:04:24 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Fan Liao (), liaofan8@gmail.com
 *   Organization:  BST
 *
 * =====================================================================================
 */

#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
void daemonize(void)
{
	pid_t pid;
	/*
	 * * Become a session leader to lose controlling
	 * TTY.
	 * */
	if ((pid = fork()) < 0) {
		perror("fork");
		exit(1);
	} else if (pid != 0) /*  parent */
		exit(0);
	setsid();
	/*
	 * * Change the current working directory to the
	 * root.
	 * */
	if (chdir("/") < 0) {
		perror("chdir");
		exit(1);
	}
	/*
	 * * Attach file descriptors 0, 1, and 2 to
	 /dev/null.
	*/
/*   	close(0);
	open("/dev/null", O_RDWR);
	dup2(0, 1);
	dup2(0, 2);
*/
	int i;
	for(i=0;i<5000000;i++)
	printf("%d\n",i);	
}
int main(void)
{
	daemonize();
	while(1);
	return 0;
}
