#include <stdio.h>

typedef struct { int count, youngest_id; } Result;
typedef struct { int id, age; char group[4]; } Donor;

Result eligible(const Donor d[], int n, const char *group) {
    Result r={0,0};
    for(int i=0;i<n;i++)
        if(d[i].age>=18 && d[i].age<=65 &&
           d[i].age>0 && d[i].group[0]==group[0]) {
            r.count++;
            if(!r.youngest_id || d[i].age<65) r.youngest_id=d[i].id;
        }
    return r;
}

int main(void) {
    Donor d[]={{1,25,"O+"},{2,40,"O+"}};
    Result r=eligible(d,2,"O+");
    printf("%d eligible, youngest ID %d\n",r.count,r.youngest_id);
}
