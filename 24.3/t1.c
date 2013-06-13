/*
 * =====================================================================================
 *
 *       Filename:  t1.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/22/2013 10:13:56 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Fan Liao (), liaofan8@gmail.com
 *   Organization:  BST
 *
 * =====================================================================================
 */

#include<stdio.h>

static char *msg[] = {"Sunday", "Monday",
	"Tuesday", "Wednesday",
	"Thursday", "Friday", "Saturday"};

void get_a_day(const char *pp)
{
	pp = msg[0];
	printf("%p",pp);
}

int main(void)
{
	const char *firstday = NULL;
	const char *secondday = "test";
	get_a_day(firstday);
	get_a_day(secondday);
	printf("%p\n", firstday );
	printf("%p\n", msg[0]);
	return 0;
}
