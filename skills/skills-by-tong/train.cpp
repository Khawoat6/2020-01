#include <iostream>
using namespace std;

int main()
{
	int n,k,first,last,tanfirst,f=0;
	cin >> n >> k;
	int arr[n];
	int arrchange[n];
	for(int i=0;i<n;i++)
	{
		arr[i] = i+1; 
		arrchange[i] = i+1; 
	}
	for(int i=0;i<k;i++)
	{
		cin >> first >> last;
		for(int j=0;j<n;j++)
		{
			if(arr[j] == first)
			{
				//cout << arr[j] << endl;
				first = j;
			}
			else if(arr[j] == last)
			{
				//cout << arr[j] << endl;
				last = j;
				break;
			}
		}
		tanfirst = first;
		//cout << "tanfirst : " << tanfirst << endl;
		//cout << first << last << endl;
		for(int j=last+1;j<n;j++)
		{
			arr[tanfirst] = arrchange[j];
			tanfirst++;
			f++;
		}

		for(int j=first+f;j<n;j++)
		{
			arr[j] = arrchange[first];
			first++;
		}
		
		/*for(int x=0;x<n;x++)
		{
			cout << arr[x];
		}
		cout << endl;
		for(int x=0;x<n;x++)
		{
			cout << arrchange[x];
		}
		cout << endl;*/
		for(int x=0;x<n;x++)
		{
			arrchange[x] = arr[x];
		}
		f=0;
	}
	for(int i=0;i<n;i++)
	{
		cout << arr[i] << endl;
	}
}
