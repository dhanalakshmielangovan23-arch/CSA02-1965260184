#include <stdio.h>

int main(void) {
    double rain[3][4]={{10,20,30,40},{50,60,70,80},{90,100,110,120}};
    double total=0, max=0;
    for(int i=0;i<3;i++) {
        double yearly=0;
        for(int j=0;j<4;j++) {
            yearly+=rain[i][j]; total+=rain[i][j];
            if(rain[i][j]>max) max=rain[i][j];
        }
        printf("District %d total: %.0f\n",i+1,yearly);
    }
    printf("Average: %.2f, maximum: %.0f\n",total/12,max);
}
