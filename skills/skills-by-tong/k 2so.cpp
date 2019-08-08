#include <iostream>

using namespace std;

int main()
{
	int n,x=0;
	int begin,last;
	cin >> n;
	int file1[n*2];
	int max=0;
	for(int i=0;i<n;i++)
	{
		//cout << i << " : " ;
		cin >> begin >> last ;
		file1[x] = begin;
		file1[x+1] = last;
		x = x+2;
	}
	for(int i=0;i<n*2;i++)
	{
		if(file1[i] > max)
		{
			max = file1[i];
		}
	}
	int arr[max+1];
	for(int i=0;i<=max;i++)
	{
		for(int j=i;j<i+1;j++)
		{
			arr[j] = 0;
		}
	}
	for(int i=0;i<=n*2;i++)
	{
		for(int j=file1[i];j<=file1[i+1];j++)
		{
			arr[j] = arr[j]+1;
		}
		i++;
	}
	int max2=0;
	for(int i=1;i<=max;i++)
	{
		if(arr[i] > max2)
		{
			max2 = i;
		}
	}
	cout << max2;
}
