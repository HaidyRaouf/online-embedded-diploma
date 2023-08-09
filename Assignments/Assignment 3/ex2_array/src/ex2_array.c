/*
 ============================================================================
 Name        : ex2_array.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n;
	int i;
	float sum=0;
	float average=0;
	printf("Enter the numbers of data: \n");
	fflush(stdout);
	scanf("%d",&n);
	float arr[n];
	for (i=0; i<n; i++)
	{
		printf("Enter number: \n");
		fflush(stdout);
		scanf("%f", &arr[i]);
		sum=sum+arr[i];
	}
	average=sum/n;
	printf("Average = %.2f", average);
}
