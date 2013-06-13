/*
 * =====================================================================================
 *
 *       Filename:  t3.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/20/2013 10:47:44 AM
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
	if ( (fp = fopen("file", "w+") ) == NULL) {
		perror("open file file\n");
		exit(1);
	}
	while( (ch = getchar()) != EOF)
		fputc(ch, fp);
	fclose(fp);
	return 0;
}


