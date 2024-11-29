/*
=============================================
 Name: L11T3T30016056.c
 Author: Bohan YANG
 Version: 1.0
 Copyright: Your copyright notice
 Description: 
 ============================================= */
#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int score;
    char major[50];
} a[500];

void bubble_sort(struct Student *a, int n) {
    int flag = 1;
    while (flag) {
        flag = 0;
        for (int i = 1; i < n; ++i) {
            if (strcmp(a[i].name, a[i + 1].name) > 0) {
            // if (a[i] > a[i + 1]) {
                flag = 1;
                struct Student t = a[i];
                a[i] = a[i + 1];
                a[i + 1] = t;
            }
        }
    }
}

int main() {
    printf("Input the number of students: ");
    int n;
    scanf("%d", &n);
    
    if (n <= 0) {
        puts("Warning! Student number should be positive.");
        return 0;
    }
    
    puts("Please input students' information:");
    
    for (int i = 1; i <= n; i++) {
        scanf("%s%d%s", a[i].name, &a[i].score, a[i].major);
    }
    
    bubble_sort(a, n);
    
    puts("The student list in ascending order by name is:");
    
    for (int i = 1; i <= n; i++) {
        printf("%s %d %s\n", a[i].name, a[i].score, a[i].major);
    }
    
    return 0;
}
/*
Input the number of students: Please input students' information:                        | 
Input the number of students: Please input students' information: 
*/