/*
=============================================
 Name: A1T3T30016056.c
 Author: Bohan YANG
 Version: 1.0
 Copyright: Your copyright notice
 Description: Write a program to read the amount of Euro dollars and change to HK dollar or RMB. Please output the amount of HK dollar or RMB depending on the choice. Assume the exchange rate between Euro dollar and HK dollar is 8.1, between Euro dollar and RMB is 7.2. Please choose proper data type and decimal places. Assume the input is always valid.
 ============================================= */
#include <stdio.h>
int main() {
    printf("Please input amount in Euro:");
    
    // define the var for input n
    double n;
    scanf("%lf", &n);
    
    // get the type for change
    printf("Please choose the currency converting to (1: HK dollar, 2: RMB): ");
    int opt;
    scanf("%d", &opt);
    
    // print original n
    printf("%.2f euro=", n);
    
    if (opt == 1) {
        // change to HKD
        n *= 8.1;
        printf("%.2f HK dollar\n", n);
    } else {
        // change to CNY
        n *= 7.2;
        printf("%.2f RMB\n", n);
    }
    
    return 0;
}