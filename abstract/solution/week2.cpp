#include<iostream>
#include <cstdlib>
#include <time.h>
using namespace std;
int main()
{
	int size=0;
	int arr[20];
	//srand(time(NULL));
	while(size < 20)
	{
		int check = 0;
		int r = rand()%20;
		for(int i = 0;i < size;i++) 
		{
			if(arr[i] == r)
			{
				check++;
			}	
		}
		if(check == 0)
		{
			arr[size] = r;
			size++;
		}
	}
	for(int i = 0;i < size;i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	// ============================================ END 1 ==============================================
	int sum[10];
	int first,last;
	size = 0;
	int max = 0;
	srand(time(NULL));
	while(size < 10)
	{
		int r = rand()%31-10;
		sum[size] = r;
		size++;
	}
	for(int i=0;i < 10;i++)
	{ 
		for(int j = i;j < 10;j++)
		{ 
			int result = 0;
			for(int k = i;k <= j;k++)
			{
				result += sum[k];
				if(max < result){
					max = result;
					last = k;
					first = i;
				}
			}
		}
	}

	for(int i = 0;i < size;i++)
	{
		cout << sum[i] << " ";
	}
	cout << endl;
	cout << "Output  " << max <<endl;
	cout << "range  a[" << first << "] - a[" << last << "]"<< endl;
	// ============================================ END 2 ==============================================
}
