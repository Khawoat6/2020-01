#include <iostream>
#include <list>
#include <algorithm>

using namespace std;

int main()
{
	int n,number,count=0;
	cin >> n;
	list<int> num1;
	list<int> num2;
	list<int>::iterator i1,i2;
	for(int i=0;i<n;i++)
	{
		cin >> number;
		num1.push_back(number);
	}
	for(int i=0;i<n;i++)
	{
		cin >> number;
		num2.push_back(number);
	}
	num1.sort();
	num2.sort();
	i1 = num1.begin();
	i2 = num2.begin();
	while(i1 != num1.end() && i2 != num2.end())
	{
		if(*i1<*i2)
			++i1;
		else if(*i2<*i1)
			++i2;
		else
		{
			count++;
			++i1;
			++i2;
		}
	}
	cout << count;
}
