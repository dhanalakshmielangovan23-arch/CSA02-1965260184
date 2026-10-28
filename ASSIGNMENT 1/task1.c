#include <stdio.h>

int main(void)
{
    int house_no, previous, current, units;
    long energy_charge, fixed_charge = 5000;
    long total;

    printf("Enter house number: ");
    scanf("%d", &house_no);

    printf("Enter previous reading: ");
    scanf("%d", &previous);

    printf("Enter current reading: ");
    scanf("%d", &current);

    units = current - previous;
    energy_charge = 0;
    total = fixed_charge + energy_charge;

    printf("House Number: %d\n", house_no);
    printf("Units: %d\n", units);
    printf("Energy Charge: Rs %ld.%02ld\n",
           energy_charge / 100, energy_charge % 100);
    printf("Total Bill: Rs %ld.%02ld\n",
           total / 100, total % 100);

    return 0;
}
