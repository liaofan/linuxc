/*
 * =====================================================================================
 *
 *       Filename:  h2.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  01/24/2013 03:33:38 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Fan Liao (), liaofan8@gmail.com
 *   Organization:  BST
 *
 * =====================================================================================
 */

#include <stdio.h>
int main(void)
{
	void foo();
	char c = 60;
	foo(c);
	return 0;
}
void foo(double d)
{
	printf("%f\n", d);
}
