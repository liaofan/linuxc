/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  01/23/2013 10:11:19 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Fan Liao (), liaofan8@gmail.com
 *   Organization:  BST
 *
 * =====================================================================================
 */

int bar(int c, int d)
{
	int e = c + d;
	return e;
}
int foo(int a, int b)
{
	return bar(a, b);
}
int main(void)
{
	int a=2,b=3;
	foo(a,b);
	return 0;
}
