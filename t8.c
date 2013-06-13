/*
 * =====================================================================================
 *
 *       Filename:  t8.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/09/2013 04:44:21 PM
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
	FILE *fp=fopen("test","a+");
	long p=ftell(fp);
	printf("%ld\n",p);
	p=fseek(fp,0,SEEK_CUR);
	printf("%ld\n",p);
	return 0;
}
