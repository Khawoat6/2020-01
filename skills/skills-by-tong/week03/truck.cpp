#include <iostream>
using namespace std;

int main()
{
	int n,w;
	while(1)
	{
		cin >> n >> w;
		if(n==0 && w==0)
		{
			return 0;
		}
		int count=0,sum=0;
		int weight[n];
		for(int i=0;i<n;i++)
		{
			cin >> weight[i];
		}
		for(int i=0;i<n;i++)
		{
			sum = sum+weight[i];
			if(sum > w)
			{
				count++;
				sum=0;
				i--;
			}
		}
		cout << count+1 << endl;
	}
}
