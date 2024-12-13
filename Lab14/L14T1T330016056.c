/*
=============================================
 Name: L14T1T330016056.c
 Author: Bohan YANG
 Version: 1.0
 Copyright: Your copyright notice
 Description:
 ============================================= */
#include <stdio.h>
#include <stdlib.h>
struct stuRec{
    char name[20];
    int id; 
    char gender;
};
int main()
{
    struct stuRec *p;
    p = (struct stuRec*)malloc(sizeof(struct stuRec));
    if (p) {
        printf("please input name, id and gender\n");
        scanf("%s%d%*c%c", p->name, &p->id, &p->gender);
        printf("name:%-10s,ID:%d,gender:%c\n", p->name,p->id,p->gender);
        free (p);
    }
    return 0;
}
/*
1. What is this program supposed to do?

This program dynamically allocates memory for a structure stuRec, 
which stores a student's name, ID, and gender. 
It reads these values from the user input, 
formats them, and then displays the information.

2. Is the memory dynamically allocated or statically allocated?

The memory is dynamically allocated using malloc.

3. What is %*c used for?

%*c is used to read a single character from the input stream 
but does not store it in any variable. 
It effectively discards the character.

4. If %-10s is changed to %10s, what happens?
   
Changing %-10s to %10s will right-align the string within a field of 10 characters instead of left-aligning it.

5. Why do we need to add free(p)?
   
free(p) is necessary to release the dynamically allocated memory back to the system. 
Without it, the program will cause a memory leak.
*/