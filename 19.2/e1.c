/*
 * =====================================================================================
 *
 *       Filename:  e1.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  01/28/2013 04:31:37 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Fan Liao (), liaofan8@gmail.com
 *   Organization:  BST
 *
 * =====================================================================================
 */
#include <stdio.h>
const int A = 10;
int a = 20;
static int b = 30;
int c;
int main(void)
{
	static int a = 40;
	char b[] = "Hello world";
	register int c = 50;
	printf("Hello world %d\n", c);
	return 0;
}
