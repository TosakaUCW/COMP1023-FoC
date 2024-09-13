/*
=============================================
 Name: L2T4T30016056.c
 Author: Bohan YANG
 Version: 1.0
 Copyright: Your copyright notice
 Description: Read and Output Character
 ============================================= */
#include <stdio.h>
int main (){
    printf("Read a character from keyboard: ");
    // use getchar() to read character
    char ch = getchar();
    printf("Output the character: %c", ch);
    return 0;
}
