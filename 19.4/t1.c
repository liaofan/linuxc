/*
 * =====================================================================================
 *
 *       Filename:  t1.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  02/18/2013 03:25:10 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Fan Liao (), liaofan8@gmail.com
 *   Organization:  BST
 *
 * =====================================================================================
 */
#include<stdio.h>

typedef struct {
	unsigned int one:1;
	unsigned int two:3;
	unsigned int three:3;
} demo;

int main(void)
{
	demo a = {1,3,3};
	return 0;
}
