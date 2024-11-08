/*
=============================================
 Name: L8T3T30016056.c
 Author: Bohan YANG
 Version: 1.0
 Copyright: Your copyright notice
 Description: 
 ============================================= */
#include <stdio.h>
float exchange(float a[], int n);
int main() {
    float data[4] = {2.5, 1, 1.2, 5.2};
    int i;
    // exchange(data, 4);
    printf("The biggest element in the array is %.2f\n", exchange(data, 4));
    
    // print
    for (int i = 0; i <= 3; i++)
        printf("%.2f ", data[i]);
    return 0;
}
float exchange(float a[], int n) {
    // init
    float res = a[0];
    
    // find
    for (int i = 1; i < n; i++) {
        if (a[i] > res) {
            res = a[i];
        }
    }
    return res;
}