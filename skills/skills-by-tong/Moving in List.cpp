#include <iostream>
using namespace std;

int main()
{
	int num,n,x,y;
	char t;
	cin >> num >> n;
	int arr[num],arr2[num];
	for(int i=0;i<num;i++)
	{
		arr[i] = i+1;
		arr2[i] = i+1;
	}
	for(int i=0;i<n;i++)
	{
		cin >> t >> x >> y;
		if(t == 'A') 
		{
			for(int j=0;j<num;j++)
			{
				if(arr[j] == y)
				{
					arr[j] = x;
				}
			}
		}
		else if(t == 'B')
		{
			for(int j=0;j<num;j++)
			{
				if(arr[j] == y)
				{
					
				}
			}
		}
	}
	for(int i=0;i<num;i++)
	{
		cout << arr[i];
	}
}
