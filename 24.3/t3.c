/*
 * =====================================================================================
 *
 *       Filename:  t1.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/22/2013 10:13:56 PM
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
	int i=0;
	printf("%p\n",sbrk(0));
	scanf("%d",&i);
	malloc(i);
	printf("%p\n",sbrk(0));
	return 0;
}
