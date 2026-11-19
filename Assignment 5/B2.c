#include <stdio.h>
#include <string.h>

int main(int argc,char *argv[]) {
    char name[30];
    if(argc!=2) { puts("Usage: app GROUP"); return 1; }

    printf("Donor name: ");
    if(!fgets(name,sizeof name,stdin)) return 1;
    name[strcspn(name,"\n")]=0;

    FILE *f=fopen("donors.txt","r");
    if(!f) { perror("donors.txt"); return 1; }
    fclose(f);
    printf("%s (%s)\n",name,argv[1]);
}
