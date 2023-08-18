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

void rev_sentence();

int main(void) {
	printf("Enter a sentence:");
	fflush(stdout);
	rev_sentence();
}
void rev_sentence()
{
	char c;
	scanf("%c", &c);
	if (c!= '\n')
	{
		rev_sentence();
		printf("%c",c);
	}
}
