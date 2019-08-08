#include <iostream>
using namespace std;

int main()
{
	int n,sub;
	cin >> n;
	int sum = n;
	if (n==1)
	{
		cout << 1;
		return 0;
	}
	if(n%3 != 0)
	{
		sub = 3-(n%3);
		n = n+sub;
	}
	while(1)
	{
		if(n < 3)
		{
			cout << sum;
			break;
		}
		sum = sum+(n / 3);
		n = (n/3);
		//cout << n << endl;
	}
}
