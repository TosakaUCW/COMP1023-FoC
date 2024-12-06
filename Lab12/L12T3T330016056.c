/*
=============================================
 Name: L12T3T330016056.c
 Author: Bohan YANG
 Version: 1.0
 Copyright: Your copyright notice
 Description:
 ============================================= */
# include <stdio.h>
void stringCombine(char* dest, char* src);
int main()
{
    char str1[256], str2[256];
    gets(str1);
    gets(str2);
    stringCombine(str1, str2);
    puts(str1);
    return 0;
}
void stringCombine(char *dest, char *src){
	// move pointer
    while (*dest) {
		dest++;
	}
	
	while (*src) {
		// copy from src to dest
		*dest = *src;
		// move pointer dest
		dest++;
		// move pointer src
		src++;
	}
	
	*dest = '\0';
}
