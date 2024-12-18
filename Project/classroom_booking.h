#ifndef CLASSROOM_BOOKING_H
#define CLASSROOM_BOOKING_H

typedef struct {
    char name[10];
    int capacity;
    char dates[3][11];
    char timeslots[3][8][50];
    char book_status[3][8][31];
} Classroom;

int load_classrooms(Classroom classrooms[], int max_classrooms, char dates[3][11]);
int check_and_book_classroom(Classroom *room, int day_index, int timeslot_index, const char *user_name);
void initialize_classroom_file(Classroom *room);

#endif // CLASSROOM_BOOKING_H
