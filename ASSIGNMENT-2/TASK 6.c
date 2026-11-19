#include <stdio.h>
int main(void) {
    double b=10000, r=0.02, pay=2000;
    int month=0;
    while (b>0.01 && month<360) {
        b += b*r;
        b -= b<pay ? b : pay;
        month++;
    }
    printf("Months: %d\n", month);
}
