#include <iostream>
using namespace std;

int main()
{
	int n,count=0,sub=0;
	cin >> n;
	n = n + 2;
	int arr[n][n];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(i==0 || j==0 || i==n-1 || j==n-1) 
			{
				arr[i][j] = 0;
			}
			else
			{
				cin >> arr[i][j];
			}
		}
	}
	for(int i=1;i<n-1;i++)
	{
		for(int j=1;j<n-1;j++)
		{
			if(arr[i][j] == 1)
			{
				for(int k=-1;k<=1;k++)
				{
					arr[i-1][j+k] = 11;
					arr[i][j+k] = 11;
					arr[i+1][j+k] = 11;
				}
			}
			else if(arr[i][j] == 2)
			{
				for(int k=-2;k<=2;k++)
				{
					arr[i-2][j+k] = 11;
					arr[i-1][j+k] = 11;
					arr[i][j+k] = 11;
					arr[i+1][j+k] = 11;
					arr[i+2][j+k] = 11;
				}
			}
			else if(arr[i][j] == 3)
			{
				for(int k=-3;k<=3;k++)
				{
					arr[i-3][j+k] = 11;
					arr[i-2][j+k] = 11;
					arr[i-1][j+k] = 11;
					arr[i][j+k] = 11;
					arr[i+1][j+k] = 11;
					arr[i+2][j+k] = 11;
					arr[i+3][j+k] = 11;
				}
			}
		}
	}
	for(int i=1;i<n-1;i++)
	{
		for(int j=1;j<n-1;j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	for(int i=1;i<n-1;i++)
	{
		for(int j=1;j<n-1;j++)
		{
			if(arr[i][j] == 0)
				count++;
		}
		cout << count << endl;
	}
}
