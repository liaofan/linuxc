/*
 * =====================================================================================
 *
 *       Filename:  t1.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/12/2013 10:31:26 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Fan Liao (), liaofan8@gmail.com
 *   Organization:  BST
 *
 * =====================================================================================
 */

#include <unistd.h>
#include <stdlib.h>
int main(void)
{
	execlp("ps", "why", "au",NULL); 
	perror("exec ps");
	exit(1);
}

