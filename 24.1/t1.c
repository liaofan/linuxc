/*
 * =====================================================================================
 *
 *       Filename:  t1.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/21/2013 11:17:37 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Fan Liao (), liaofan8@gmail.com
 *   Organization:  BST
 *
 * =====================================================================================
 */

#include<stdio.h>
#include<string.h>

int main(void)
{
	char buf[10]="abcdefghij1234";
	char str[4]="hell";
	printf(buf);
	printf("\n");
	strcpy(buf,str);
	printf(buf);
	return 0;
}
