/*
=============================================
 Name: L5T1T30016056.c
 Author: Bohan YANG
 Version: 1.0
 Copyright: Your copyright notice
 Description: Write a program to implement the following control flow diagram. Assumption: the inputted height and weight are all bigger than 0.
 ============================================= */
#include <stdio.h>
int main() {
    int height, weight;
    printf("Input height(cm, >0) and weight(kilo, >0): ");
    scanf("%d %d", &height, &weight);
    
    if (height - 105 > weight + 20) {
        printf("You are too slim\n");
    } else if (weight - 10 < height - 105 && height - 105 <= weight + 20) {
        printf("You are fit\n");
    } else {
        printf("You are too fat\n");
    }
    
    return 0;
}