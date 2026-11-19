#include <stdio.h>

typedef struct { int day, month, year; } Date;
typedef struct { char name[20]; float price; int stock; Date expiry; } Item;

int sell(Item *i, int quantity) {
    if(quantity > i->stock) return 0;
    i->stock -= quantity;
    return 1;
}

int main(void) {
    Item item={"Juice",30,10,{21,11,2026}};
    printf("%s\n",sell(&item,2) ? "Sale complete" : "Not enough stock");
    printf("Remaining: %d\n",item.stock);
}
