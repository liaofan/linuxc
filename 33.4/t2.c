/*
 * =====================================================================================
 *
 *       Filename:  t2.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/18/2013 03:12:27 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Fan Liao (), liaofan8@gmail.com
 *   Organization:  BST
 *
 * =====================================================================================
 */

#include<unistd.h>
#include<signal.h>
#include<stdio.h>

void sig_alrm(int signo)
{
	/*  nothing to do */

}
unsigned int mysleep(unsigned int nsecs)
{
	struct sigaction newact, oldact;
	unsigned int unslept;
	newact.sa_handler = sig_alrm;
	sigemptyset(&newact.sa_mask);
	newact.sa_flags = 0;
	sigaction(SIGALRM, &newact, &oldact);
	alarm(nsecs);
	pause();
	unslept = alarm(0);
	sigaction(SIGALRM, &oldact, NULL);
	return unslept;
}
int main(void)
{
	while(1){
		printf("%d\n",mysleep(5));
		printf("Two seconds passed\n");
	}
	return 0;
}
