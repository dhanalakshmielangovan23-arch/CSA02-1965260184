#include <stdio.h>

int main(void) {
    int votes[]={1,2,2,3,0,4,2,-1}, c=4, count[13]={0};
    int valid=0, invalid=0, max=0, winner=0, tie=0;

    for(int i=0;i<8;i++)
        if(votes[i]>=1 && votes[i]<=c) {
            count[votes[i]]++; valid++;
        } else invalid++;

    for(int i=1;i<=c;i++) if(count[i]>max) max=count[i],winner=i;
    for(int i=1;i<=c;i++) if(i!=winner && count[i]==max) tie=1;

    printf("Valid:%d Invalid:%d\n",valid,invalid);
    for(int k=max;k>0;k--)
        for(int i=1;i<=c;i++) if(count[i]==k) printf("%d: %d\n",i,count[i]);
    printf("Winner:%d %s\n",winner,tie?"Tie":"");
}
