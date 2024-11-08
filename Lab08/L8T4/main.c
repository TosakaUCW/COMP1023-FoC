/*
=============================================
 Name: L8T4T30016056.c
 Author: Bohan YANG
 Version: 1.0
 Copyright: Your copyright notice
 Description: 
 ============================================= */
#include <stdio.h>
#include "digit.h"

int main() {
	// Hint for input
	printf("Enter a character: ");
	// Define
	char ch;
	// input
	scanf("%c", &ch);

	// print ans
	printf("%d\n", isDigitChar(ch));
	return 0;
}
