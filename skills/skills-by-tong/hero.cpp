#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int hero,monter,power=0,count=0,totalpower=0;
	cin >> hero;
	int phero[hero];
	for(int i=0;i<hero;i++)
	{
		cin >> phero[i];
		totalpower = totalpower + phero[i];
	}
	cin >> monter;
	if(totalpower <= monter )
	{
		cout << "you die";
		return 0;
	}
	sort(phero,phero+hero);
	for(int i=0;i<hero;i++)
	{
		power = power + phero[hero-1];
		if(power > monter)
		{
			count++;
			break;
		}
	}
	cout << count;
}
