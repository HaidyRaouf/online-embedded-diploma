/*
 ============================================================================
 Name        : hw2_ex1.c
 Author      : Haidy Raouf
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */


#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n;
	printf("Enter an integer you want to check: \n");
	fflush(stdout);
	scanf("%d", &n);
	if ((n%2)==0)
	{
		printf("%d is even", n);
	}
	else
	{
		printf("%d is odd", n);
	}
}

