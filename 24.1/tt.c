/*
 * =====================================================================================
 *
 *       Filename:  h3.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/22/2013 07:28:55 PM
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
	while(1)
	printf("%p\n",sbrk(1024*16));
	return 0;
}
