#include <iostream>
#include <stdio.h>
using namespace std;

bool isPrime (int p)
{
    int counter=0;
    for (int i=2; i<=p/2; i++) {
        if (p%i==0){
            counter++;
        }
    }
    if (counter==0){
        return true;
    }
    else{
        return false;
    }
}
int main() {
    int n, i;
    cin >> n;
    for (i = n; !isPrime(i); i--);
    cout << n-i << endl;
}