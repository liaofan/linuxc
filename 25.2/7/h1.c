/*
 * =====================================================================================
 *
 *       Filename:  h1.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/31/2013 01:49:31 PM
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
	FILE *fp1=fopen("t1","r");
	FILE *fp2=fopen("t2","w");
	char a[10];
	while( fgets(a,10,fp1)!=NULL)
		fputs(a,fp2);
	return 0;
}
