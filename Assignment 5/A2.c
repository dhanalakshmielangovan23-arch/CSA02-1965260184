#include <stdio.h>

int root(int n) {
    if(n<10) return n;
    int sum=0;
    while(n) { sum+=n%10; n/=10; }
    return root(sum);
}

long long power(long long b,int n) {
    if(n==0) return 1;
    long long h=power(b,n/2);
    return h*h*(n%2 ? b : 1);
}

int main(void) {
    printf("Root: %d\nPower: %lld\n",root(9875),power(2,10));
}
