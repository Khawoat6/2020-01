// Chalinee Traiyapanjawit 5930300216 Sec 801

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

static void getSix (int *dst) {
    int sz, pos, i, src[20];
    for (i = 0; i < sizeof(src)/sizeof(*src); i++)
        src[i] = i + 1;
    sz = 20;
    for (i = 0; i < 20; i++) {
        pos = rand() % sz;
        dst[i] = src[pos];
        src[pos] = src[sz-1];
        sz--;
    }
}
int main (void) {
    srand (time (NULL));
    int i, numbers[20];
    getSix (numbers);
    for (i = 0; i < sizeof(numbers)/sizeof(*numbers); i++)
        printf (" %d", numbers[i]);
    printf ("\n");
}