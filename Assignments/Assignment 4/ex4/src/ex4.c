/*
 ============================================================================
 Name        : ex4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int c=1;
int power (int b, int p)
{
	if (p!=1)
	{
		power(b, p-1);
	}
	c=c*b;
	return c;

}
int main(void) {
	printf("Enter base number:");
	int b;
	fflush(stdout);
	scanf("%d", &b);
	printf("Enter power number:");
	int p;
	fflush(stdout);
	scanf("%d", &p);
	int res=power(b,p);
	printf("%d ^ %d = %d", b, p, res);
}
