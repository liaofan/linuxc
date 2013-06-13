/*
 * =====================================================================================
 *
 *       Filename:  t2.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  12/13/2012 03:23:58 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Fan Liao (), liaofan8@gmail.com
 *   Organization:  BST
 *
 * =====================================================================================
 */

#include<stdio.h>

unsigned int multiply(unsigned int x, unsigned int y)
{
	unsigned int product=0;	
	for (int i=1; i < 32; i++) {
		if (y % 2 == 1) 
			product += x << (i-1);
		y = y >> 1;
	}
	if (y % 2 == 1) 
		product += x << 31;
	return product;
}

int main(void)
{
	unsigned int x,y;
	scanf("%u %u",&x,&y);
	printf("%d\n", multiply(x, y));
	return 0;
}
