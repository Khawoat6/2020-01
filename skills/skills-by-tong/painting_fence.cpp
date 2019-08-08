#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int n,sum=0,max=0,output;
	cin >> n;
	int fence[n];
	for(int i=0;i<n;i++)
	{
		cin >> fence[i];
		if(fence[i] > max)
		{
			max = fence[i];
		}
	}
	//check fence tall
}
