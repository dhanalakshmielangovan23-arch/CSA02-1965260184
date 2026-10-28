#include <stdio.h>

#define FIXED_CHARGE 5000LL
#define RATE2 225LL
#define RATE3 450LL

long long compute_bill(int units)
{
    long long bill = FIXED_CHARGE;

    if (units > 100)
        bill += (long long)(units < 200 ? units - 100 : 100)
                * RATE2;

    if (units > 200)
        bill += (long long)(units - 200) * RATE3;

    return bill;
}

int main(void)
{
    int units;
    long long total = 0;

    for (int i = 1; i <= 5; i++) {
        printf("Enter units for house %d: ", i);

        if (scanf("%d", &units) != 1 || units < 0) {
            printf("Invalid units\n");
            return 1;
        }

        long long bill = compute_bill(units);
        total += bill;

        printf("Bill: Rs %lld.%02lld\n",
               bill / 100, bill % 100);
    }

    printf("Grand Total: Rs %lld.%02lld\n",
           total / 100, total % 100);

    return 0;
}
