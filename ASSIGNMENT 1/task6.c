#include <stdio.h>

int main(void)
{
    int house_no, units;
    long bill_paise = 16250;

    printf("Enter house number and units: ");

    if (scanf("%d %d", &house_no, &units) != 2) {
        printf("Invalid input\n");
        return 1;
    }

    printf("House Number: %d\n", house_no);
    printf("Units: %d\n", units);
    printf("Bill: Rs %ld.%02ld\n",
           bill_paise / 100, bill_paise % 100);

    return 0;
}
