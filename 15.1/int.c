/*
 * =====================================================================================
 *
 *       Filename:  int.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  12/03/2012 10:10:35 AM
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
	int a = -2147483648;
//	printf("%u\n",0xffff0000);
	printf("%d\n",0x80000000);
	printf("%d\n",a);
	//printf("%u\n",-10);
	printf("%d\n",-2147483648);
	return 0;
}
