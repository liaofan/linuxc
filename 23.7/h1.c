/*
 * =====================================================================================
 *
 *       Filename:  h1.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/20/2013 08:04:07 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Fan Liao (), liaofan8@gmail.com
 *   Organization:  BST
 *
 * =====================================================================================
 */

#include<stdio.h>
int main(void)
{
	char a[4][3][2] ={
			{{'a', 'b'}, {'c', 'd'}, {'e', 'f'}},
			{{'g', 'h'}, {'i', 'j'}, {'k', 'l'}},
			{{'m', 'n'}, {'o', 'p'}, {'q', 'r'}},
			{{'s', 't'}, {'u', 'v'}, {'w', 'x'}}
			};
	char (*pa)[2] = &a[1][0];
	char (*ppa)[3][2] = &a[1];
	printf("%c\n",(*(pa+5))[1]);
	printf("%c\n",(*++ppa)[2][1]);
}
