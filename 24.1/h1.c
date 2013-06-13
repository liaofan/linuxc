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
//#include<string.h>
 
char * strcpy(char * dest, const char * src)
{
	for(int i=0;dest[i]=src[i];i++);
	return dest;
}

int main(void)
{
	char *s="yes,oh\n",d[20];
	printf(strcpy(d,s));
	return 0;
}
