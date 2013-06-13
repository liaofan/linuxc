/*
 * =====================================================================================
 *
 *       Filename:  t1.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/18/2013 10:16:52 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Fan Liao (), liaofan8@gmail.com
 *   Organization:  BST
 *
 * =====================================================================================
 */

#include<stdio.h>
#include<unistd.h>
int main(void)
{
	printf("fd 0: %s\n", ttyname(0));
	printf("fd 1: %s\n", ttyname(1));
	printf("fd 2: %s\n", ttyname(2));
	return 0;
}
