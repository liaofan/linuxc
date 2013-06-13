/*
 * =====================================================================================
 *
 *       Filename:  t1.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/19/2013 12:10:51 PM
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
	const char p='a';
	char *p1=&p;
	*p1='b';
	printf("%c\n",*p1);
	printf("%c\n",p);
	return 0;
}

