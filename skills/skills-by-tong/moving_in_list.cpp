#include <iostream>
#include <algorithm>
#include <list>
using namespace std;

int main()
{
	list<int> num;
	list<int>::iterator poiter;
	char c;
	int n,rob,x,y;
	cin >> n >> rob;
	for(int i=1;i<=n;i++)
	{
		num.push_back(i);
	}
	for(int i=0;i<rob;i++)
	{
		cin >> c >> x >> y;
		poiter = find(num.begin(),num.end(),y);
		if(c == 'A')
		{
			num.remove(x);
			num.insert(poiter,x);
		}
		else if(c == 'B')
		{
			num.remove(x);
			poiter++;
			num.insert(poiter,x);
		}
	}
	for(poiter=num.begin(); poiter!=num.end(); ++poiter)
	{
		cout << *poiter << endl;
	}
}
