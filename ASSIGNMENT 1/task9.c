#include <stdio.h>

#define FIXED_CHARGE 5000L
#define RATE1 0L
#define RATE2 225L
#define RATE3 450L
#define LIMIT1 100
#define LIMIT2 200
#define MAX_READING 65535

long compute_bill(unsigned int units)
{
    long bill = FIXED_CHARGE;

    if (units > LIMIT1) {
        unsigned int n = units < LIMIT2
                       ? units - LIMIT1 : LIMIT2 - LIMIT1;
        bill += (long)n * RATE2;
    }

    if (units > LIMIT2)
        bill += (long)(units - LIMIT2) * RATE3;

    return bill;
}

int main(void)
{
    int house, previous, current;
    unsigned int units;
    long bill;

    printf("Enter house number: ");
    if (scanf("%d", &house) != 1 || house <= 0) {
        printf("Invalid house number\n");
        return 1;
    }

    printf("Enter previous and current readings: ");
    if (scanf("%d %d", &previous, &current) != 2 ||
        previous < 0 || previous > MAX_READING ||
        current < 0 || current > MAX_READING) {
        printf("Invalid readings\n");
        return 1;
    }

    if (current < previous) {
        if (previous < 65000 || current > 1000) {
            printf("Invalid reading decrease\n");
            return 1;
        }
        units = (MAX_READING + 1U) - previous + current;
    } else {
        units = current - previous;
    }

    bill = compute_bill(units);

    printf("\nHouse Number: %d\n", house);
    printf("Units Consumed: %u\n", units);
    printf("Total Bill: Rs %ld.%02ld\n",
           bill / 100, bill % 100);

    return 0;
}
