/*
 * =====================================================================================
 *
 *       Filename:  h1.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/21/2013 02:18:58 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Fan Liao (), liaofan8@gmail.com
 *   Organization:  BST
 *
 * =====================================================================================
 *
 * 
 */
#include<stdio.h>
 
char * shrink_space(char * dest, const char * src, size_t n)
{
	
	int i=0;
	for(int j=0; i<n&&src[j]!='\0'; j++) {
		switch(src[j]) {
		case '\t':
		case '\n':
		case '\r':
		case ' ':
			if (j==0||src[j-1]!=' ') 
				dest[i++]=' ';
			break;
		default:
			dest[i++]=src[j];
			break;
		}
	}
	for(;i<n;i++)
		dest[i]='\0'; 
	return dest;
}
				
int main(void)
{
	char *s="                  This 	Content\
	hohook?  file   systemuttered wordsok okend.is\
	ok?";
	char d[200];
	printf(shrink_space(d,s,200));
	return 0;
}
