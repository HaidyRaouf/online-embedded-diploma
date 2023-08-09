/*
 ============================================================================
 Name        : ex2_string.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char s[100];
	int i, l=0;
	printf("enter a string: \n");
			fflush(stdout);
			gets(s);
			for (i=0; s[i]!='\0';i++)
			{
				l=l+1;
			}
			printf("length of string: %d",l);
}
