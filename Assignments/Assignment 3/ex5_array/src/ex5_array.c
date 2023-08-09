/*
 ============================================================================
 Name        : ex5_array.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n, i, e, l, flag=0;
	int arr[100];
	printf("enter no of elements: \n");
	fflush(stdout);
	scanf("%d", &n);
	for (i=0; i<n; i++)
	{
		scanf("%d", &arr[i]);
	}
	printf("enter the element to be searched:\n ");
	fflush(stdout);
	scanf("%d", &e);
	for (i=0; i<n; i++)
	{
		if (arr[i]==e)
		{
			l=i;
			flag=1;
			break;
		}
		else
			continue;
	}
	if (flag ==1)
		printf("number found at the location= %d \n", l+1);
	else
		printf("number not found");
}
