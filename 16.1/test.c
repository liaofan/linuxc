/*
 * =====================================================================================
 *
 *       Filename:  test.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  12/13/2012 02:19:36 PM
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
	int i = 0xcffffff3;
	printf("%x\n", 0xcffffff3>>2);
	printf("%d\n", 2147483647>>2);
	printf("%d\n", i>>2);
	printf("%x\n", i>>2);
	return 0;
}

