/*
 * =====================================================================================
 *
 *       Filename:  t2.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/17/2013 04:55:23 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Fan Liao (), liaofan8@gmail.com
 *   Organization:  BST
 *
 * =====================================================================================
 */

#include<unistd.h>
#include<stdio.h>
int main(void)
{
	alarm(1);
	int c=0;
	while(++c)
		printf("%d\n",c);
	return 0;
}
