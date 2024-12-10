/*
=============================================
 Name: A4T2T30016056.c
 Author: Bohan YANG
 Version: 1.0
 Copyright: Your copyright notice
 Description:
 ============================================= */
#include <stdio.h>
#include <string.h>

#define N 10000

int main() {
    // Declare
    char str1[N], str2[N];
    
    // Read
    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);
    
    // Remove trailing newline
    str1[strcspn(str1, "\n")] = '\0';

    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);
    
    // Remove trailing newline
    str2[strcspn(str2, "\n")] = '\0';

    // Check if str2 is a substring of str1
    if (strstr(str1, str2) != NULL) {
        printf("No need to append, str1 is: %s\n", str1);
    } else {
        strcat(str1, str2);
        printf("After appending, str1 is: %s\n", str1);
    }
    
    return 0;
}