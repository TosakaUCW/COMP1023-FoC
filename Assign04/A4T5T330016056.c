/*
=============================================
 Name: A4T5T30016056.c
 Author: Bohan YANG
 Version: 1.0
 Copyright: Your copyright notice
 Description:
 ============================================= */
#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[20];
    char ID[10];
    int score;
};

int main() {
    FILE *file;
    struct Student student;
    int tot = 0;

    // Open
    file = fopen("stuScore.bin", "rb");

    // Read and print
    while (fread(&student, sizeof(struct Student), 1, file)) {
        printf("%s %s %d\n", student.name, student.ID, student.score);
        tot++;
    }

    // Print
    printf("Totally there are %d students' records in this file.\n", tot);

    // Close
    fclose(file);

    return 0;
}