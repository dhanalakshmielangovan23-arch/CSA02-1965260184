#include <stdio.h>

typedef struct { int day, month, year; } Date;
typedef struct { char city[20]; int pin; } Address;
typedef struct { int id; float weight; Address to; Date booked; } Parcel;

void print(const Parcel *p) {
    printf("%d %.1f kg %s-%d %02d/%02d/%04d\n",
           p->id,p->weight,p->to.city,p->to.pin,
           p->booked.day,p->booked.month,p->booked.year);
}

int main(void) {
    Parcel p={501,4.5,{"Madurai",625001},{12,10,2026}};
    print(&p);
}
