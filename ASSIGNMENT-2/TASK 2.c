#include <stdio.h>
int calls;
int check(void) { calls++; return 1; }

int main(void) {
    int result = 0 && check();
    printf("result=%d calls=%d\n", result, calls);
}
