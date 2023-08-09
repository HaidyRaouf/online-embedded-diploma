/*
 ============================================================================
 Name        : ex4_array.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n, i, e, l, temp;
	int arr[100];
	printf("enter no of elements: \n");
	fflush(stdout);
	scanf("%d", &n);
	for (i=0; i<n; i++)
	{
		scanf("%d", &arr[i]);
	}
	printf("enter the element to be inserted:\n ");
	fflush(stdout);
	scanf("%d", &e);
	n=n+1;
	printf("enter the location:\n ");
	fflush(stdout);
	scanf("%d", &l);
	l=l-1;
	for (i=0; i<n; i++)
	{
		if (i<l)
			continue;
		else if (i==l)
		{
			temp=arr[i];
			arr[i]=e;
			e=temp;
		}
		else
		{
			temp=arr[i];
			arr[i]=e;
			e=temp;
		}


	}
	for (i=0; i<n; i++)
	{
		printf("%d", arr[i]);
	}

}
