/*
 * =====================================================================================
 *
 *       Filename:  t2.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/27/2013 10:07:13 AM
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

int main(int argc, char *argv[])
{
	char str[]="abc:defo,gh,4;5";
	char *token,*delimiter;
	delimiter=argv[1];
 	token=strtok(str,delimiter);
	printf("%s\n",token);
	return 0;
}
