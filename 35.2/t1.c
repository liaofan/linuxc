/*
 * =====================================================================================
 *
 *       Filename:  t1.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  05/07/2013 01:40:55 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Fan Liao (), liaofan8@gmail.com
 *   Organization:  BST
 *
 * =====================================================================================
 */

#include<string.h>
#include<stdlib.h>
#include<pthread.h>
#include<unistd.h>
#include<stdio.h>
pthread_t ntid;
void printids(const char *s)
{
	pid_t pid;
	pthread_t tid;
	pid = getpid();
	tid = pthread_self();
	printf("%s pid %u tid %u (0x%x)\n", s, (unsigned int)pid, (unsigned int)tid, (unsigned int)tid);
}
void *thr_fn(void *arg)
{
	printids(arg);
	return (void*)1;
}
int main(void)
{
	int err;
	err = pthread_create(&ntid, NULL, thr_fn, "new thread: ");
	if (err != 0) {
		fprintf(stderr, "can't create thread: %s\n",
				strerror(err));
		exit(1);
	}
	printids("main thread:");
	sleep(1);
	char *a='haha';
	void **p=&a;
	pthread_join(ntid,p);
	printf("%p\n",*p);
	return 0;
}
