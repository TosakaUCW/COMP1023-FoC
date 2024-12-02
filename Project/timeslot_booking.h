#ifndef TIMESLOT_BOOKING_H
#define TIMESLOT_BOOKING_H

typedef struct {
    int hour;
    int minute;
} Time;

void display_timeslots(int is_today);
int select_timeslot(int is_today);

#endif // TIMESLOT_BOOKING_H
