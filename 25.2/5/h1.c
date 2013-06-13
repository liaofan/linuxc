/*
 * =====================================================================================
 *
 *       Filename:  h1.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/31/2013 10:49:26 AM
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
int main(int argc, char * argv[])
{
	FILE *fp=NULL,*fp2=NULL;
	if((fp=fopen(argv[1],"r"))==NULL) {
		perror("Open file");
		exit(1);
	}

	if((fp2=fopen(argv[2],"w"))==NULL) {
		perror("Write file");
		exit(1);
	}
	int ch;
	while((ch=fgetc(fp))!=EOF)
		fputc(ch,fp2);
	fclose(fp);
	fclose(fp2);
	return 0;	
}
