/*
 * =====================================================================================
 *
 *       Filename:  t1.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/16/2013 03:32:11 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Fan Liao (), liaofan8@gmail.com
 *   Organization:  BST
 *
 * =====================================================================================
 */

#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	FILE *fp=fopen("text1","r");
	FILE *fp1=fopen("text2","w");
	int a,b=0;
	while((a=fgetc(fp))!=EOF) {
		if(a!='\n'||b==0) {
			fputc(a, fp1);
			if(a=='\n')
				b++;
	}
}
	fclose(fp);
	fclose(fp1);
	return 0;
}
