/*
 ============================================================================
 Name        : Example8.c
 Author      : Haidy Raouf
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char c;
	float n1, n2, result;
	printf("Enter operator either + or - or * or divide:\n");
	fflush(stdout);
    scanf("%c", &c);
	printf("Enter two operands :");
	fflush(stdout);
	scanf(" %f %f", &n1, &n2);
	if (c=='+')
	{
		result=n1+n2;
		printf("%f %c %f = %.1f",n1, c, n2, result);
	}
	else if (c=='-')
	{
		result=n1-n2;
		printf("%f %c %f = %.1f",n1, c, n2, result);
	}
	else if (c=='*')
	{
		result=n1*n2;
		printf("%f %c %f = %.1f",n1, c, n2, result);
	}
	else
	{
		result=n1/n2;
		printf("%f %c %f = %.1f",n1, c, n2, result);
	}

}
