/*
 * =====================================================================================
 *
 *       Filename:  t1.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  12/13/2012 02:44:57 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Fan Liao (), liaofan8@gmail.com
 *   Organization:  BST
 *
 * =====================================================================================
 */


#include<stdio.h>
typedef int a [10];
int countbit(unsigned int x)
{
	int count=0;
	for (int i=1; i < 32; i++) {
		if (x % 2 == 1)
			count++;
		x = x >> 1;
	}
	return count;
}

int main()
{
	unsigned int x;
	scanf("%u", &x);
	printf("%d\n", countbit(x));
	return 0;
}
