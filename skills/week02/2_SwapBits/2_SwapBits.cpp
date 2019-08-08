#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <climits>
#include <iostream>

using namespace std;
int swapBits(int x)
{
//    unsigned int even_bits = x & 0xAAAAAAAA;
    int even_bits = x & 0b10101010;
//    unsigned int odd_bits = x & 0x55555555;
    int odd_bits = x & 0b01010101;
    
    even_bits >>= 1; // Right shift even bits
    odd_bits <<= 1; // Left shift odd bits
    
    return (even_bits | odd_bits);
}

int main()
{
    int x;
    cin >> x;
    int s = swapBits(x);
    printf("%d", s);
    cout << endl;
}