/*
 * =====================================================================================
 *
 *       Filename:  h1.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/18/2013 08:50:50 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Fan Liao (), liaofan8@gmail.com
 *   Organization:  BST
 *
 * =====================================================================================
 */

#include<signal.h>
#include<stdio.h>
#include<unistd.h>
#include<sys/wait.h>
#include<sys/types.h>
#include<stdlib.h>
void f(int a)
{
	int stat_val;
	wait(&stat_val);
	printf("%d\n",a);
	if (WIFEXITED(stat_val))
		printf("Child exited with code %d\n", WEXITSTATUS(stat_val));
	else if (WIFSIGNALED(stat_val))
		printf("Child terminated abnormally, signal %d\n", WTERMSIG(stat_val));

}

int main(void)
{
	struct sigaction newact, oldact;
	newact.sa_handler=&f;
	newact.sa_flags=0;
	sigemptyset(&newact.sa_mask);
	sigaction(SIGCHLD, &newact, &oldact);	
	pid_t pid=fork();
	if(pid==0)
		exit(2);
	else {
		pause();
		printf("father        !!!!!!!!!!!\n");
		sleep(5);
	}
	sigaction(SIGCHLD, &oldact, NULL);
	return 0;
}
