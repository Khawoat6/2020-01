// Chalinee Traiyapanjawit 5930300216 Sec 801

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <climits>

static void getSix (int *dst) {
    int sz, pos, i, src[10];
    for (i = 0; i < sizeof(src)/sizeof(*src); i++)
        src[i] = rand() % 30 + (-10) ;
    sz = 10;
    for (i = 0; i < 10; i++) {
        pos = rand() % sz;
        dst[i] = src[pos];
        src[pos] = src[sz-1];
        sz--;
    }
}

int maxSubArraySum(int numbers[], int size)
{
    int max_so_far = INT_MIN, max_ending_here = 0;
    for (int i = 0; i < size; i++)
    {
        max_ending_here = max_ending_here + numbers[i];
        if (max_so_far < max_ending_here)
            max_so_far = max_ending_here;
        
        if (max_ending_here < 0)
            max_ending_here = 0;
    }
    return max_so_far;
}

int main (void) {
    srand (time (NULL));
    int i, numbers[10];
    getSix (numbers);
    printf ("a =");
    for (i = 0; i < sizeof(numbers)/sizeof(*numbers); i++)
        printf (" %d", numbers[i]);
    int n = 10;
    int max_sum = maxSubArraySum(numbers, n);
    printf("\n");
    printf("Output %d", max_sum);
    printf ("\n");
}