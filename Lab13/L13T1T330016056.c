/*
=============================================
 Name: L13T1T330016056.c
 Author: Bohan YANG
 Version: 1.0
 Copyright: Your copyright notice
 Description:
 ============================================= */
#include <stdio.h>
#include <string.h>

int fileCopy(char *destFileName, char *resFileName) {
    FILE *srcFile, *destFile;
    char ch;

    // Open the source file
    srcFile = fopen(resFileName, "r");
    if (srcFile == NULL) {
        return 0;
    }

    // Open the destination file
    destFile = fopen(destFileName, "w");
    if (destFile == NULL) {
        fclose(srcFile);
        return 0;
    }

    // Copy contents character by character
    while ((ch = fgetc(srcFile)) != EOF) {
        fputc(ch, destFile);
    }

    // Close both files
    fclose(srcFile);
    fclose(destFile);

    return 1; // Indicate success
}

int main()
{
    char fileName1[20], fileName2[20];
    int flag;
    strcpy(fileName1, "a.txt");
    strcpy(fileName2, "b.txt");
    flag = fileCopy(fileName2, fileName1);
    if (flag == 1) 
        printf("Success"); 
    else 
        printf ("Failure");
    return 0;
}
