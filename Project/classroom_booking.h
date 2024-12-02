#ifndef CLASSROOM_BOOKING_H
#define CLASSROOM_BOOKING_H

typedef struct {
    char name[10];
    int capacity;
} Classroom;

int load_classrooms(Classroom classrooms[], int max_classrooms);
int check_and_book_classroom(const char *classroom_name, int day_index, int timeslot_index, const char *user_name);
void initialize_classroom_file(const char *classroom_name);

#endif // CLASSROOM_BOOKING_H
