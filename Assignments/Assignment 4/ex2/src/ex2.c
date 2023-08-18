/*
 ============================================================================
 Name        : ex2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int product=1;

int factorial (int n)
{
	if (n==0)
		product=1;
	else
	{
		if (n!=1)
		{
			product=n*factorial(n-1);
		}
	}
	return product;
}
/*
int factorial (int n)
{
	if (n!=1)
		return n*factorial (n-1);
}
 */
int main(void) {
	printf("Enter a positive integer:");
	fflush(stdout);
	int n;
	scanf("%d",&n);
	int a=factorial(n);
	printf("Factorial of %d = %d", n,a);

}
