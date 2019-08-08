#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	int n,rob,y=-1;
	string str;
	int first,last;
	cin >> n;
	for(int i=0;i<n;i++)
	{
		cin >> str;
		string arr[str.size()];
		string arr2[str.size()];
		for(int j=0;j<str.size();j++)
		{
			arr[j] = str[j];
			arr2[j] = str[j];
		}
		cin >> rob;
		for(int j=0;j<rob;j++)
		{
			cin >> first >> last;
			int tan=last-1;
			for(int k=first-1;k<last;k++)
			{
				arr[k] = arr2[tan];
				tan--;
			}
			for(int k=0;k<str.size();k++)
			{
				arr2[k] = arr[k];
			}
		}
		for(int j=0;j<str.size();j++)
		{
			cout << arr[j];
		}
		cout << endl;
	}
}	
