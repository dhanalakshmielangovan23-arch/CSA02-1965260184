#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct { int id; char group[4]; } Donor;
typedef struct { Donor *data; int size, capacity; } List;

int add(List *l,int id,const char *group) {
    if(l->size==l->capacity) {
        int cap=l->capacity ? l->capacity*2 : 2;
        Donor *p=realloc(l->data,cap*sizeof *p);
        if(!p) return 0;
        l->data=p; l->capacity=cap;
    }
    l->data[l->size].id=id;
    snprintf(l->data[l->size++].group,4,"%s",group);
    return 1;
}

int main(void) {
    List l={0};
    if(add(&l,7001,"O+")) printf("%d %s\n",l.data[0].id,l.data[0].group);
    free(l.data);
}
