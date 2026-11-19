#include <stdio.h>
#include <string.h>

typedef struct { int day, month, year; } Date;
typedef struct { int systolic, diastolic; } BP;
typedef struct { char name[30], phone[11]; int age; BP bp; Date visit; } Patient;

void addPatient(Patient *p, const char *name, int age) {
    snprintf(p->name, sizeof p->name, "%s", name);
    p->age = age;
}

int main(void) {
    Patient p = {0};
    addPatient(&p, "Anu", 25);
    printf("%s %d\n", p.name, p.age);
}
