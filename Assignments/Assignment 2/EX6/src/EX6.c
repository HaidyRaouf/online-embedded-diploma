/*
 ============================================================================
 Name        : EX6.c
 Author      : Haidy Raouf
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int sum=0, n, i;
	printf("Enter an Integer:");
	fflush(stdout);
	scanf("%d", &n);
	for (i=1; i<=n; i++)
	{
		sum=sum+i;
	}
	printf("sum = %d", sum);
}
