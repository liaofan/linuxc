/*
 * =====================================================================================
 *
 *       Filename:  h2.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/29/2013 08:32:14 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Fan Liao (), liaofan8@gmail.com
 *   Organization:  BST
 *
 * =====================================================================================
 */

#include<stdio.h>
#include<errno.h>
#include<stdlib.h>
int main(void)
{
/*  	FILE * fp = fopen("/etc/shadow", "r");
	if (fp == NULL) {
		perror("Open /etc/shadow");
		exit(1);
	}
*/
	FILE *fp = fopen("/home/liaofan/", "r+");
	if (fp == NULL) {
		perror("Open /home/akaedu");
		exit(1);
	}


}
