/*
=============================================
 Name: L7T1T30016056.c
 Author: Bohan YANG
 Version: 1.0
 Copyright: Your copyright notice
 Description: 
 ============================================= */
#include <stdio.h>

#define SIZE 5

// s[] is for stack
// value from s[0] ~ s[top - 1]
int top;
int s[SIZE];

int main() {
    
    while (1) {
        printf("Please choose action(1: Push 2: Pop  0: Exit): ");
        int opt;
        scanf("%d", &opt);
        
        if (opt == 0) {
            // exit
            printf("Exiting the program\n");
            break;
        } else if (opt == 1) {
            // push
            if (top == SIZE) {
                // full
                printf("Unsuccessful push operation: Stack is full\n");
            } else {
                printf("Enter an integer to push: ");
                
                scanf("%d", &s[top]);
                top++;
            }
        } else {
            if (top == 0) {
                printf("Unsuccessful pop operation: Stack is empty\n");
            } else {
                printf("Popped: %d\n", s[top - 1]);
                top--;    
            }
        }
        
        // display stack
        //  Stack: 10 20 3 5 23
        printf("----------------------\n");
        printf("| Stack: ");
        for (int i = 0; i < top; i++) {
            printf("%d ", s[i]);
        }
        printf("\n");
        printf("----------------------\n");
    }

    return 0;
}