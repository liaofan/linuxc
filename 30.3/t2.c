/*
 * =====================================================================================
 *
 *       Filename:  t2.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/12/2013 05:39:59 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Fan Liao (), liaofan8@gmail.com
 *   Organization:  BST
 *
 * =====================================================================================
 */

#include<sys/types.h>
#include<sys/wait.h>
#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	pid_t pid;
	pid = fork();
	if (pid < 0) {
		perror("fork failed");
		exit(1);
	}
	if (pid == 0) {
		int i;
		for (i = 3; i > 0; i--) {
			printf("This is the child\n");
			sleep(1);
		}
		exit(3);
	} else {
		int stat_val;
		waitpid(pid, &stat_val, 0);
		printf("%d\n",stat_val);
		printf("%d\n",WIFEXITED(stat_val));
		if (WIFEXITED(stat_val))
			printf("Child exited with code %d\n", WEXITSTATUS(stat_val));
		else if (WIFSIGNALED(stat_val))
			printf("Child terminated abnormally, signal %d\n", WTERMSIG(stat_val));
	}
	return 0;
}
