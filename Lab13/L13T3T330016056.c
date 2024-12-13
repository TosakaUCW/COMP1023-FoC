/*
=============================================
 Name: L13T3T330016056.c
 Author: Bohan YANG
 Version: 1.0
 Copyright: Your copyright notice
 Description:
 ============================================= */
#include <stdio.h>
#include <string.h>

int main() {
    FILE *file;
    float number;
    
    // Open
    file = fopen("sample.bin", "rb");
    if (file == NULL) {
        // Fail
        return 1;
    }

    // Read 5th
    fseek(file, (4) * sizeof(float), SEEK_SET); 
    fread(&number, sizeof(float), 1, file);     
    printf("num1 is %f\n", number); 
    
    // Read 7th
    fseek(file, (6) * sizeof(float), SEEK_SET);
    fread(&number, sizeof(float), 1, file);    
    printf("num2 is %f\n", number); 
    
    fclose(file);  
    
    return 0;
}
