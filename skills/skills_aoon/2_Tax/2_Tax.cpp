
#include <iostream>
using namespace std;

int main()
{
    int n=1;
    int tax,vat;
    while(n != 0)
    {
        cin >> n;
        if(n == 0)
        {
            break;
        }
        if(n < 100000)
        {
            tax = 0;
        }
        // 6
        else if(n >= 100001 & n <= 1000000)
        {
            vat = n-100000;
            tax = vat*0.06;
        }
        // 12
        else if(n >= 1000001 & n <= 5000000)
        {
            vat = n-1000000;
            tax = 54000 +(vat*0.12);
        }
        // 20
        else if(n >= 5000001 & n <= 10000000)
        {
            vat = n-5000000;
            tax = 54000 + 480000 + (vat*0.2);
        }
        else if(n > 10000000 )
        {
            tax = 54000 + 480000 + 1000000 + ((n-10000000)*0.32);
        }
        cout << tax << endl;
    }
}
