#include <stdio.h>

int main(void)
{
    int n, peak;
    long long wh, rate, fixed, total = 0;

    printf("Enter fixed charge in paise: ");
    if (scanf("%lld", &fixed) != 1 || fixed < 0)
        return 1;

    printf("Enter base rate in paise per kWh: ");
    if (scanf("%lld", &rate) != 1 || rate < 0)
        return 1;

    printf("Enter number of readings: ");
    if (scanf("%d", &n) != 1 || n < 0)
        return 1;

    total = fixed;

    for (int i = 0; i < n; i++) {
        printf("Enter watt-hours and peak flag (0/1): ");

        if (scanf("%lld %d", &wh, &peak) != 2 ||
            wh < 0 || (peak != 0 && peak != 1)) {
            printf("Invalid input\n");
            return 1;
        }

        long long numerator = wh * rate *
                              (peak ? 120LL : 100LL);

        total += (numerator + 50000LL) / 100000LL;
    }

    printf("Total Bill: Rs %lld.%02lld\n",
           total / 100, total % 100);

    return 0;
}
