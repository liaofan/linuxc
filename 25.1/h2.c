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
#include<string.h>
#include<stdlib.h>
struct url {
	char * u;
	char ** key;
	char ** value;
};

struct url parse(char * str){
	char * t1= strtok (str,"?"),* token, *token2;
	char * t2= strtok(NULL, "?");
	int j,k1;
	struct url url1;
	url1.u=t1;
	int count=1;
	for (int i=0; t2[i]!='\0'; i++) {
		if (t2[i]=='&')
			count++;
	}
	char **p=malloc(sizeof(char *)*count);
	char **k=malloc(sizeof(char *)*count);
	char * savep1,*savep2;
	for (char * str1 = t2, j=0;;str1=NULL,j++)
	{
		token=strtok_r(str1,"&",&savep1);
		if (token==NULL)
			break;
		for ( char * str2=token,k1=0;;str2=NULL,k1++)
		{
			token2=strtok_r(str2,"=",&savep2);
			if (token2==NULL)
				break;
			if (k1==0) {
				p[j]=token2;
				k[j]="";
			}
			else				
				*(k+j)=token2;	
		}
	}
	url1.u=t1;
	url1.key=p;
	url1.value=k;
	return url1;
}
int main(void)
{
	char str[]="http://www.google.cn/search?complete=1&hl=zh-CN&ie=GB2312&q=linux&meta=";
	struct url url1;
	url1=parse(str);
	printf("%s\n%s\n",url1.key[0],url1.value[0]);
	return 0;
}
