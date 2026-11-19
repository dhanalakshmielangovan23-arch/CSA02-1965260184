#include <stdio.h>
int main(void) {
    double p=200, q=3, g=p*q;
    double total=g-g*0.15+g*0.05;
    printf("%.2f\n", total > 1000 ? total-50 : total);
}
