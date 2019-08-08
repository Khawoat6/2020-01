#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int n,d,r;
	while(1)
	{
		cin >> n >> d >> r;
		int y=0,ot=0,plus=0;;

		int morningn[n],nightn[n];
		if(n==0 && d==0 && r==0)
		{
			return 0;
		}
		for(int i=0;i<n;i++)
		{
			cin >> morningn[i];
		}
		for(int i=0;i<n;i++)
		{
			cin >> nightn[i];
		}
		sort(morningn,morningn+n);
		sort(nightn,nightn+n);
		while(n)
		{
			//cout << morningn[y] << " " << nightn[n-1] << endl;
			plus = morningn[y]+nightn[n-1];
			if(plus>d)
			{
				ot = ot+(plus-d);
			}
			n--;
			y++;
		}
		cout << ot*r << endl;
	}
}
