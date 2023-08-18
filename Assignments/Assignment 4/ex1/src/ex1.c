/*
 ============================================================================
 Name        : ex1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
void prime (int a,int b)
{
	printf("prime numbers between %d and %d are:" ,a,b);
	int i;
	for (i=a+1; i<b; i++)
	{
		if ((i%2 !=0) && (i%3!=0))
		{
			printf("%d", i);
			printf (" ");
		}
	}

}
int main(void) {
	int a, b;
	printf("Enter two numbers(intervals): \n");
	fflush(stdout);
	scanf("%d %d", &a, &b);
	prime(a,b);
}
