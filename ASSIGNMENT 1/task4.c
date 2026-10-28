#include <stdio.h>

#define SQUARE(x) ((x) * (x))
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define RUPEES_TO_PAISE(r) ((r) * 100)

int main(void)
{
    int a = 5, b = 8;

    printf("Square: %d\n", SQUARE(a + 1));
    printf("Maximum: %d\n", MAX(a, b));
    printf("Rupees to paise: %d\n", RUPEES_TO_PAISE(50));

    return 0;
}
