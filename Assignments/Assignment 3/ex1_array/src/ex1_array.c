/*
 ============================================================================
 Name        : ex1_array.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float arr1[2][2];
	float arr2[2][2];
	float sum[2][2];
	printf("Enter the elements of 1st matrix \n");
	int i,j;
	for (i=0; i<2; i++)
	{
		for (j=0; j<2; j++)
		{
			printf("Enter a%d%d:\n", i+1,j+1);
			fflush(stdout);
			scanf("%f",&arr1[i][j]);

		}
	}
	printf("Enter the elements of 2nd matrix \n");
	for (i=0; i<2; i++)
	{
		for (j=0; j<2; j++)
		{
			printf("Enter a%d%d :\n", i+1,j+1);
			fflush(stdout);
			scanf("%f",&arr2[i][j]);

		}
	}
	for (i=0; i<2; i++)
	{
		for (j=0; j<2; j++)
		{
			sum[i][j]=arr1[i][j]+arr2[i][j];

		}
	}
	printf("sum of Matrix:\n");
	printf("%.1f \t %.1f \n", sum[0][0], sum[0][1]);
	printf("%.1f \t %.1f \n", sum[1][0], sum[1][1]);

}
