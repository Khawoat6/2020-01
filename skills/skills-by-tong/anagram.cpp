#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	int n,yes=0;
	string str1,str2;
	char arr_str[1000];
	cin >> n;
	for(int i=0;i<n;i++)
	{
		cin >> str1;
		cin >> str2;
		sort(str1.begin(), str1.end());
		sort(str2.begin(), str2.end());
		for(int j=0;j<str1.length();j++)
		{
			if(str1[j] == str2[j])
			{
				yes++;
			}
		}
		if(yes == str1.length())
		{
			cout << "ANAGRAM" << endl;
			yes=0;
		}
		else 
		{
			cout << "NOT ANAGRAM" << endl;
			yes=0;
		}
	}
}
