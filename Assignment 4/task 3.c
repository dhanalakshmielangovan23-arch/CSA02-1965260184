#include <stdio.h>

enum { TEMP, HUMIDITY, STATUS };
typedef struct {
    int type;
    union { float temp; int humidity; char status[8]; } value;
} Reading;

void show(const Reading *r) {
    switch(r->type) {
        case TEMP: printf("Temp %.1f C\n",r->value.temp); break;
        case HUMIDITY: printf("Humidity %d %%\n",r->value.humidity); break;
        case STATUS: printf("Status %s\n",r->value.status);
    }
}

int main(void) {
    Reading r={TEMP,{.temp=31.5f}};
    show(&r);
}
