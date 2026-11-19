#include <stdio.h>

int main(void) {
    int a[] = {2, 5, 8, 12, 16}, key = 12, i, low = 0, high = 4, mid;
    for (i = 0; i < 5 && a[i] != key; i++);
    printf("Linear index: %d\n", i < 5 ? i : -1);

    while (low <= high) {
        mid = low + (high - low) / 2;
        if (a[mid] == key) break;
        if (a[mid] < key) low = mid + 1;
        else high = mid - 1;
    }
    printf("Binary index: %d\n", low <= high ? mid : -1);
}
