#include <stdio.h>

typedef struct { int number; float balance; } Account;

void addInterest(Account *a, float rate) {
    a->balance += a->balance * rate / 100;
}

int main(void) {
    Account a={101,5000};
    addInterest(&a,4);
    printf("%d %.2f\n",a.number,a.balance);
}
