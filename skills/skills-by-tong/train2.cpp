#include <iostream>
#include <algorithm>
#include <list>
using namespace std;

int main()
{
	int num,rob;
	list<int> n,n2;
	list<int>::iterator p,start,en;
	int first,last;
	cin >> num >> rob;
	for(int i=1;i<=num;i++)
	{
		n.push_back(i);
	}
	for(int i=0;i<rob;i++)
	{
		cin >> first >> last;
		start = find(n.begin(),n.end(),first);
		en = find(n.begin(),n.end(),last);
		for(p=en;p!=n.end();++p)
		{
			//cout << *p << endl;
			//n2.push_back(*p);
			n2.push_back(*p);
			if(*p == last)
				break;
		}
		
		for(p=n2.begin();p!=n2.end();++p)
		{
			//cout << *p << endl;
			n.remove(*p);
			n.push_back(*p);
			if(*p == last)
				break;
		}
		
		n2.clear();
	}
	for(p=n.begin();p!=n.end();++p)
	{
		cout << *p << endl;
	}
}
