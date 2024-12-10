/*
=============================================
 Name: A4T1T30016056.c
 Author: Bohan YANG
 Version: 1.0
 Copyright: Your copyright notice
 Description:
 ============================================= */
#include <stdio.h>

#define N 10000

int main() {
    
    char str[N], ans[N], ch;
    // Read the string and the character to remove
    printf("Input: ");
    scanf("%s %c", str, &ch);
    
    int i, j = 0;
    // Iterate and copy
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] != ch) {
            ans[j++] = str[i];
        }
    }
    // Null-terminate the ans string
    ans[j] = '\0';
    
    // Print the ans string
    printf("Output: %s\n", ans);
    return 0;
}