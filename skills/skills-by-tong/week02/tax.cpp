#include <iostream>
using namespace std;

int main()
{
	int n=1;
	int case1 = 0,case2 = 54000,case3 = 480000,case4 = 1000000; 
	int tax,sub;
	while(n != 0)
	{
		cin >> n;
		if(n == 0)
		{
			break;
		}
		if(n < 100000)
		{
			tax = case1;
		}
		// 6
		else if(n >= 100001 & n <= 1000000)
		{
			sub = n-100000;
			tax = sub*0.06;
		}
		// 12
		else if(n >= 1000001 & n <= 5000000)
		{
			sub = n-1000000;
			tax = case2+(sub*0.12);
		}
		// 20
		else if(n >= 5000001 & n <= 10000000)
		{
			sub = n-5000000;
			tax = case2+case3+(sub*0.2);
		}
		else if(n > 10000000 )
		{
			tax = case2+case3+case4+((n-10000000)*0.32);
		}
		cout << tax << endl;
	}
}
