/*
 * =====================================================================================
 *
 *       Filename:  1.3.3.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  12/30/2012 03:33:35 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Fan Liao (), liaofan8@gmail.com
 *   Organization:  BST
 *
 * =====================================================================================
 */

#include<stdio.h>

unsigned int rotate_right(unsigned int x, int n)
{
 	for (int i = 0; i < n; i++) {
		if (x % 2 == 1) {
			x = x >> 1;
			x = x + 0x80000000;
		}
		else
			x = x >> 1;
	}
	return x;
}
int main(void)
{
	printf("%x\n",rotate_right(0xdeadbeef,8));
	return 0;
}
