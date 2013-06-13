/*
 * =====================================================================================
 *
 *       Filename:  h1.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/27/2013 10:49:36 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Fan Liao (), liaofan8@gmail.com
 *   Organization:  BST
 *
 * =====================================================================================
 */

#include<stdio.h>

char * search(const char *s, char ch)
{
	for(int i=0; s[i]!='\0'; i++) {
		if (s[i]==ch)
			return &s[i];
	}
	return NULL;
}

char * strtok(char *str, const char *delim)
{
	static char * pr=NULL;
	if(str)
		pr=str;
	char * token = pr;
	for (int i=0; pr[i]!='\0'; i++)
	{
		if ( search(delim, pr[i])) {
			pr[i]='\0';
			pr=pr+i+1;
			return token;
		}
	}
	return NULL;	
}


int main(void)
{
	char t[]="hello,12;34:56";
	char *token=strtok(t,",:;?");
	printf("%s\n",token);
	while (token=strtok(NULL, ",:;?"))
		printf("%s\n",token);
	return 0;
}
