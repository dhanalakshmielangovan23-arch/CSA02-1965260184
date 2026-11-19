#include <stdio.h>
#include <string.h>

int main(void) {
    char names[][30]={"Ravi","Anu","Maya","Anu"}, temp[30];
    int n=4;

    for(int i=0;i<n-1;i++)
        for(int j=0;j<n-i-1;j++)
            if(strcmp(names[j],names[j+1])>0) {
                strcpy(temp,names[j]);
                strcpy(names[j],names[j+1]);
                strcpy(names[j+1],temp);
            }

    for(int i=0;i<n;i++) {
        puts(names[i]);
        if(i && strcmp(names[i],names[i-1])==0) printf("Duplicate: %s\n",names[i]);
    }
}
