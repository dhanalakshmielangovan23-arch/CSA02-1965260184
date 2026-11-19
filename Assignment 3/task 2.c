#include <stdio.h>

void bubble(int a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int swapped = 0;
        for (int j = 0; j < n - i - 1; j++)
            if (a[j] > a[j+1]) {
                int t=a[j]; a[j]=a[j+1]; a[j+1]=t; swapped=1;
            }
        if (!swapped) break;
    }
}

void selection(int a[], int n) {
    for (int i=0; i<n-1; i++) {
        int m=i;
        for (int j=i+1; j<n; j++) if (a[j]<a[m]) m=j;
        int t=a[i]; a[i]=a[m]; a[m]=t;
    }
}

void insertion(int a[], int n) {
    for (int i=1; i<n; i++) {
        int x=a[i], j=i-1;
        while (j>=0 && a[j]>x) a[j+1]=a[j--];
        a[j+1]=x;
    }
}

int main(void) {
    int a[]={8,3,5,1,7}, n=5;
    insertion(a,n);
    for(int i=0;i<n;i++) printf("%d ",a[i]);
}
