/*
 ============================================================================
 Name        : ex5.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char c;
		printf("Enter a character:\n");
		fflush(stdout);
	    scanf("%c", &c);
	    printf("ASCII value of %c = %d",c ,c);
}
