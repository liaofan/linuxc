/*
 * =====================================================================================
 *
 *       Filename:  t1.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/08/2013 03:39:04 PM
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

int main(void)
{
	FILE *fp=fopen("/usr/include","r");
	if (fp==NULL) {
		perror("Open directory");
		exit(1);
	}
	char content[500];
	fgets(content, 500, fp);
//	while(fgets(content, 500, fp)!=NULL){
//	printf("%s",content);
//	}
	printf("%s",content);
}
