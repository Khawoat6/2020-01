#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	string str;
	cin >> str;
	int a=0,f=0,c=0,l=0,no=0;
	for(int i=1;i<str.size()-1;i++)
	{
		//cout << str[i];
		if(str[i] == 'A')
			a++;
		else if(str[i] == 'F')
			f++;
		else if(str[i] == 'C')
			c++;
		else 
			no++;
	}
	
	if(str[str.size()-1] == 'A' || str[0] == 'A')
		if(str[str.size()-1] == 'A' && str[0] == 'A')
			l=l+2;
		else if(str[str.size()-1] == 'A')
			l++;
		else if(str[0] == 'A')
			l++;
	if(str[str.size()-1] == 'B' || str[0] == 'B')
		if(str[str.size()-1] == 'B' && str[0] == 'B')
			l=l+2;
		else if(str[str.size()-1] == 'B')
			l++;
		else if(str[0] == 'B')
			l++;
	if(str[str.size()-1] == 'C' || str[0] == 'C')
		if(str[str.size()-1] == 'C' && str[0] == 'C')
			l=l+2;
		else if(str[str.size()-1] == 'C')
			l++;
		else if(str[0] == 'C')
			l++;
	if(str[str.size()-1] == 'D' || str[0] == 'D')
		if(str[str.size()-1] == 'D' && str[0] == 'D')
			l=l+2;
		else if(str[str.size()-1] == 'D')
			l++;
		else if(str[0] == 'D')
			l++;
	if(str[str.size()-1] == 'E' || str[0] == 'E')
		if(str[str.size()-1] == 'E' && str[0] == 'E')
			l=l+2;
		else if(str[str.size()-1] == 'E')
			l++;
		else if(str[0] == 'E')
			l++;
	if(str[str.size()-1] == 'F' || str[0] == 'F')
		if(str[str.size()-1] == 'F' && str[0] == 'F')
			l=l+2;
		else if(str[str.size()-1] == 'F')
			l++;
		else if(str[0] == 'F')
			l++;
	
	//cout << l << endl;
	if(a > 0 && f > 0 && c > 0 && no == 0 && l==2)
		cout << "Infected!";
	else
		cout << "Good";
}
