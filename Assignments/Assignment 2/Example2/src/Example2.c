/*
 ============================================================================
 Name        : Example2.c
 Author      : Haidy Raouf
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */


#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char c;
	printf("Enter an alphabet: \n");
	fflush(stdout);
	scanf("%c", &c);
	((c=='a')||(c=='e')||(c=='i')||(c=='u')||(c=='o')||(c=='A')||(c=='I')||(c=='E')||(c=='O')||(c=='U'))?printf("%c is a vowel", c):printf("%c is a constatnt", c);

	}

