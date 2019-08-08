#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int Last_Digit = n % 10;
    while(n>=10){
        n = n / 10;
    }
    int First_Digit = n;
    printf("%d", n);
    printf("%d", Last_Digit);
    cout << endl;
}