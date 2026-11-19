#include <stdio.h>
#include <string.h>

int *lowest(int stock[], int n) {
    int *p=&stock[0];
    for(int i=1;i<n;i++) if(stock[i]<*p) p=&stock[i];
    return p;
}

int main(int argc,char *argv[]) {
    int stock[]={10,4,8,2};
    if(argc!=3 || strcmp(argv[1],"issue")) {
        printf("Usage: bloodbank issue GROUP\n"); return 1;
    }
    printf("Lowest stock: %d\n",*lowest(stock,4));
}
