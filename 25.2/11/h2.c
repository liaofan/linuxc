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
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>

char * trim(char * p)
{
	char *l,*tmp,*r;
	for (l=p;*l==' '||*l=='\t'||*l=='\n';l++);
	tmp=l;
	for (;*l!='\0';l++);
	r=l-1;
	for (;*r==' '||*r=='\t'||*r=='\n';r--)
		*r='\0';
	return tmp;
}

int isempty(char * p)
{
	char * temp=trim(p);
	if (!*temp)
		return 1;
	else 
		return 0;
}
int main(int argc, char *argv[])
{
	
	FILE *fp1=fopen(argv[1],"r+");
	FILE *fp2=fopen(argv[2],"w+");
 	if( fp1 == NULL) {
		perror("Open file INI");
		exit(1);
	}
 	if( fp1 == NULL) {
		perror("Open file XML"); 
		exit(1);
	}
	char ss[100],ds[100],*key,*value,*token,*pr, temp[20];
	bool test=false;//写过没有，写过为真，没写过为假
	while(fgets(ss, 100, fp1)!=NULL) {
		if(isempty(ss))
		{	
			if(test)
				continue;
			sprintf(ds, "</%s>\n", temp);
			fputs(ds,fp2);
			fflush(fp2);
			test=true;
			continue;
		}
		pr=trim(ss);
		if(pr[0]==';') {
			pr++;
			sprintf(ds,"<!-- %s -->\n",pr);
			fputs(ds, fp2);
			fflush(fp2);
		}
		else if(pr[0]=='[') {
			token=strtok(pr,"[");
			token=strtok(token,"]");
			sprintf(ds, "<%s>\n", token);
			strncpy(temp,token,20);
			fputs(ds, fp2);
			fflush(fp2);
			test=false;
		}
		else {
			key=strtok(pr,"=");
			value=strtok(NULL,"=");
			key=trim(key);
			value=trim(value);
			sprintf(ds, "<%s>%s</%s>\n", key, value, key);
			fputs(ds, fp2);
			fflush(fp2);
		}
	}
	sprintf(ds, "</%s>\n", temp);
	fputs(ds,fp2);
	fflush(fp2);
	fclose(fp1);
	fclose(fp2);
	return 0;	
}
