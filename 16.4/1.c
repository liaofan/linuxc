/*
 * =====================================================================================
 *
 *       Filename:  1.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  01/08/2013 11:12:41 AM
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
	int i = 0;
	unsigned int sum=0;
	for (; i<16; i++){
		sum = sum + (1U<<i);
	printf("%x\n",sum);	
}
	return 0;
}
