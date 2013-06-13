/*
 * =====================================================================================
 *
 *       Filename:  h1.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/19/2013 04:01:26 PM
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
	char *p="test";
	char *const *p1=&p;
	printf ("%p\n",p1);
	printf ("%p\n",*p1);
	printf ("%s\n",*p1);
	p1++;
	printf ("%p\n",p1);
	printf ("%p\n",*p1);
	printf ("%s\n",*p1);
	p1--;
//  	(*p1)++;
	printf ("%p\n",p1);
	printf ("%p\n",*p1);
	printf ("%s\n",*p1);
	(**p1)++;
	printf ("%p\n",p1);
	printf ("%p\n",*p1);
	printf ("%s\n",*p1);
	return 0;
}
