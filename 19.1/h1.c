/*
 * =====================================================================================
 *
 *       Filename:  h1.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  01/23/2013 07:23:43 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Fan Liao (), liaofan8@gmail.com
 *   Organization:  BST
 *
 * =====================================================================================
 */

int foo();
int bar();
int main(void)
{
	foo(2, 3, 4);
	return 0;
}
int foo(int a, int b)
{
	return bar(a);
}
int bar(int c, int d)
{
	int e = c + d;
	return e;
}
