#include <stdio.h>

int main(void)
{
    int a = 5, b = 2;
    float x = 0.1f + 0.2f;
    double y = 0.1 + 0.2;

    printf("Integer division: %d\n", a / b);
    printf("Float result: %.9f\n", x);
    printf("Double result: %.17f\n", y);
    printf("Explicit conversion: %.2f\n",
           (double)a / b);

    return 0;
}
