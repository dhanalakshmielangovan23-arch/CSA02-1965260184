#include <stdio.h>

int merge(const int a[], int m, const int b[], int n, int out[]) {
    int i=0, j=0, k=0;
    while(i<m && j<n) out[k++] = a[i]>=b[j] ? a[i++] : b[j++];
    while(i<m) out[k++]=a[i++];
    while(j<n) out[k++]=b[j++];
    return k;
}

int main(void) {
    int a[]={98,91,85}, b[]={95,91,80}, c[6];
    int n=merge(a,3,b,3,c);
    for(int i=0;i<n;i++) printf("%d ",c[i]);
}
