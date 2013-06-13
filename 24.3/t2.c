/*
 * =====================================================================================
 *
 *       Filename:  t2.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/23/2013 04:07:40 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Fan Liao (), liaofan8@gmail.com
 *   Organization:  BST
 *
 * =====================================================================================
 */

void func(int a)
{
	a++;
	a=a+9;
	printf("%d\n",a);
}

int main(void)
{
	int b=0;
	func(b);
	return 0;
}
