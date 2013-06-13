/*
 * =====================================================================================
 *
 *       Filename:  t10.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/10/2013 06:40:00 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Fan Liao (), liaofan8@gmail.com
 *   Organization:  BST
 *
 * =====================================================================================
 */

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/ioctl.h>
int main(void)
{
	struct winsize size;
	if (isatty(STDOUT_FILENO) == 0)
		exit(1);
	if(ioctl(STDOUT_FILENO, TIOCGWINSZ, &size)<0) {
		perror("ioctl TIOCGWINSZ error");
		exit(1);
	}
	printf("%d rows, %d columns\n", size.ws_row, size.ws_col);
	return 0;
}
