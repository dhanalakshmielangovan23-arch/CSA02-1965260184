#include <stdio.h>

int main(void)
{
    int n = 4000;
    long long paise_total = 0;
    float float_total = 0.0f;

    for (int i = 0; i < n; i++) {
        paise_total += 16250;
        float_total += 162.50f;
    }

    printf("Paise total: Rs %lld.%02lld\n",
           paise_total / 100, paise_total % 100);
    printf("Float total: Rs %.2f\n", float_total);

    return 0;
}
