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

int bar(int c, int d, int m)
{
	int e = c + d;
	int f = c * d;
	int g = c+d;
	int k = c-d;
	return e;
}
int foo(int a, int b, int c)
{
	return bar(a, b, c);
}
int main(void)
{
	foo(2, 3, 4);
	int a=1;
	return 0;
}
