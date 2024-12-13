/*
=============================================
 Name: L14T2T330016056.c
 Author: Bohan YANG
 Version: 1.0
 Copyright: Your copyright notice
 Description:
 ============================================= */
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    int *data, *ptr;

    printf("Input the number of the data: ");
    scanf("%d", &n);
    
    if (n <= 0) {
        printf("Warning! You should input a positive integer!\n");
        return 0;
    }

    // input
    data = (int *)malloc(n * sizeof(int));
    if (data == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // input
    printf("Input %d integer numbers: ", n);
    ptr = data;
    for (i = 0; i < n; i++) {
        scanf("%d", ptr++);
    }

    // print
    printf("Numbers in reverse order are: ");
    for (ptr = data + n - 1; ptr >= data; ptr--) {
        printf("%d ", *ptr);
    }
    printf("\n");

    // free memory
    free(data);
    
    return 0;
}