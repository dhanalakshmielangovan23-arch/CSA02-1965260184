#include <stdio.h>

int next_token(void) {
    static int token=1000;
    return ++token;
}

int main(void) {
    printf("%d %d %d\n",next_token(),next_token(),next_token());
}
