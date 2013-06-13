/*
 * =====================================================================================
 *
 *       Filename:  t2.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/18/2013 09:59:15 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Fan Liao (), liaofan8@gmail.com
 *   Organization:  BST
 *
 * =====================================================================================
 */
#include<stdio.h>
int main(void)
{
	int a,b;
	a=1;
	a++;
	printf("%d \n", a);
	return 0;
}
int liaofan;
int func(int test)
{
	int inter=test;
	return inter++;
}
