#include <stdio.h>
#include "login_module.h"
#include "date_selection.h"
#include "timeslot_booking.h"

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
    
    // 3 - 4. Timeslot Booking
    int timeslot_choice = select_timeslot(date_choice == 1); // If today pass 1，else pass 0

    if (timeslot_choice == 9) {
        printf("Exiting the system.\n");
    } else {
        printf("You selected timeslot: %d\n", timeslot_choice);
    }
    
    puts("------------------------------");
    
    return 0;
}