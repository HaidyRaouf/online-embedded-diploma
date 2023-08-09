/*
 ============================================================================
 Name        : ex3_string.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "string.h"

int main(void) {
	char s[100];
	char r[100];
	int l, i, j=0;
		printf("enter the string: \n");
				fflush(stdout);
				gets(s);
				l=strlen(s);
				for (i=l-1; i>=0; i--)
				{
					r[j]=s[i];
					j++;
				}
				printf("reverse string is : %s" , r);

}
