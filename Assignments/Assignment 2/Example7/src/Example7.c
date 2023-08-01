/*
 ============================================================================
 Name        : Example7.c
 Author      : Haidy Raouf
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n, i, factorial=1;
		printf("Enter an Integer:");
		fflush(stdout);
		scanf("%d", &n);
		if (n <0)
		{
			printf("Error!!! Factorial of negative number doesn't exist");
		}
		else if (n==0)
		{
			printf("Factorial= 1");
		}
		else
		{
			for (i=n;i >=1; i--)
			{
			factorial=factorial*i;
			}
			printf("Factorial= %d", factorial);
		}
}
