/*
 * =====================================================================================
 *
 *       Filename:  e1.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/31/2013 10:42:57 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Fan Liao (), liaofan8@gmail.com
 *   Organization:  BST
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	FILE *fp;
	int ch;
	if ( (fp = fopen("file2", "w+")) == NULL) {
		perror("Open file file2\n");
		exit(1);
	}
	while ( (ch = getchar()) != EOF)
		fputc(ch, fp);
	rewind(fp);
	while ( (ch = fgetc(fp)) != EOF)
		putchar(ch);
	fclose(fp);
	return 0;
}
