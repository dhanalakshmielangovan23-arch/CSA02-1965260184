int prime(unsigned long n) {
    if (n<2) return 0;
    if (n%2==0) return n==2;
    for (unsigned long i=3; i<=n/i; i+=2)
        if (n%i==0) return 0;
    return 1;
}
