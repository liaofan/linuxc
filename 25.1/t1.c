/*
 * =====================================================================================
 *
 *       Filename:  t1.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/26/2013 06:31:31 PM
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
	char buf[20]="hello world\n";
	memcpy(buf+1,buf,13);
	printf("%s",buf);
	return 0;
}
