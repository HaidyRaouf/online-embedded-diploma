/*
 ============================================================================
 Name        : ex3_array.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n, m, i, j;
	printf("Enter rows and column of matrix : \n");
	fflush(stdout);
	scanf("%d %d", &n, &m);
	int arr[10][10];
	int trans[10][10];
	printf("Enter elements of matrix : \n");
    for (i=0; i<n; i++)
    {
    	for (j=0; j<m; j++)
    	{
    		printf("Enter elements a%d%d: \n", i+1, j+1);
    		fflush(stdout);
    		scanf(" %d", &arr[i][j]);
    	}
    }
	printf("Entered matrix ");
	for (i=0; i<n; i++)
	    {
	    printf("\n");
		for (j=0; j<m; j++)
	    	{
	    		printf("%d", arr[i][j]);
	    		printf("\t");
	    	}
	    }
    printf("\n");
	printf("Transpose of matrix \n ");
		for (i=0; i<n; i++)
		    {
		    //printf("\n");
			for (j=0; j<m; j++)
		    	{
				trans[j][i]=arr[i][j];
		    	}
		    }
		for (i=0; i<m; i++)
			    {
			    printf("\n");
				for (j=0; j<n; j++)
			    	{
			    		printf("%d",trans[i][j]);
			    		printf("\t");
			    	}
			    }
}
