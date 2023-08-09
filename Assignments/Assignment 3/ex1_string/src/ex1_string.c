/*
 ============================================================================
 Name        : ex1_string.c
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
	char c;
	int i, sum=0;
	printf("enter a string: \n");
		fflush(stdout);
		gets(s);
		printf("enter a character to find frequency: \n");
			fflush(stdout);
			scanf("%c", &c);
			for (i=0; s[i]!='0'; i++)
			{
				if (s[i]==c)
					sum=sum+1;
				else
					continue;
			}
			printf("Frequency of %c = %d \n", c, sum);
}
