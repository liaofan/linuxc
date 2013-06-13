/*
 * =====================================================================================
 *
 *       Filename:  t6.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/02/2013 11:16:58 AM
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
	char c=fgetc(fp);
	printf("%c\n",c);
	printf("%d\n",p);
	fputs("haha\n",fp);
	fclose(fp);
	return 0;
}
