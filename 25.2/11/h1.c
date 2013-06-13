/*
 * =====================================================================================
 *
 *       Filename:  h1.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/02/2013 10:02:43 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Fan Liao (), liaofan8@gmail.com
 *   Organization:  BST
 *
 * =====================================================================================
 */

#include<stdio.h>
#include<time.h>
#include<stdlib.h>
long search( FILE *fp, char c, long w)
{
	fseek(fp,SEEK_SET,w);
//	printf("%d\n",a);
//	perror("why");
//	char c1=fgetc(fp);
//	printf("%c\n",c1);
	while(w>=0&&fgetc(fp)!=c) {
		w-=1;
		fseek(fp,w,SEEK_SET);
	}
	return w;
}
int main(void)
{
	
	FILE *fp=fopen("test.txt", "a+");
 	if( fp == NULL) {
		perror("Open file test.txt");
		exit(1);
	}
	fseek(fp, 1, SEEK_END);
	long p=ftell(fp);
	struct tm* t;
	int index=0;
	char s[30];
	if( p!=1 ){
		p=search(fp,'\n',p-2);
		char s_temp[30];
		fseek(fp,++p,SEEK_SET);
		fgets(s_temp, 30, fp);
		sscanf(s_temp, "%d", &index);
	}
	time_t tt=time(NULL);
	t = localtime(&tt);
	snprintf(s, 30, "%d %d-%d-%d %d:%d:%d\n", ++index, t->tm_year+1900, t->tm_mon+1, t->tm_mday, 
		t->tm_hour, t->tm_min, t->tm_sec);
	fputs(s, fp);
	fclose(fp);
	return 0;	
}
