/*
 * =====================================================================================
 *
 *       Filename:  t7.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/03/2013 09:59:17 AM
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
	char s[10]="   aa;bb",*token;
	token=strtok(s,";");
	
	printf("%s\n",token);
	return 0;
}
