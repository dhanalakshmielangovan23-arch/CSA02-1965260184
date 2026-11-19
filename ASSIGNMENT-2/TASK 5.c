int prime(unsigned long n) {
    if (n<2) return 0;
    for (unsigned long i=2; i<=n/i; i++)
        if (n%i==0) return 0;
    return 1;
}
