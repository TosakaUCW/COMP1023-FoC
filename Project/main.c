#include <stdio.h>
#include "login_module.h"
#include "date_selection.h"

int main() {
    // 1. Login
    if (!authenticate()) {
        return 0;
    }

    puts("------------------------------");
    
    // 2. Date Selection
    int date_choice = select_date();

    if (date_choice == 4) {
        printf("Exiting the system.\n");
        return 0;
    }

    printf("You selected: %d\n", date_choice);
    
    puts("------------------------------");
    
    return 0;
}