/*
 * =====================================================================================
 *
 *       Filename:  t1.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/18/2013 03:41:17 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Fan Liao (), liaofan8@gmail.com
 *   Organization:  BST
 *
 * =====================================================================================
 */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct test{
	int a;
	int b,c,d;
};
char aa[10];
int main(void)
{
	const int a=10;
	struct test t;
	printf("%d\n",t.a);
	printf("%d %d %d\n",t.b,t.c,t.d);
	printf ("%c %c %c %c\n",aa[0],aa[1],aa[2],aa[3]);
	int b;
	return 0;
}
