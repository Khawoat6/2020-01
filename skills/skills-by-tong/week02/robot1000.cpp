#include <iostream>
using namespace std;

int main()
{
	string dir;
	int x=0,y=0;
	cin >> dir;
	for(int i=0;i<dir.size();i++)
	{
		if(dir[i] == 'N')
		{
			y++;
		}
		else if(dir[i] == 'E')
		{
			x++;
		}
		else if(dir[i] == 'S')
		{
			y--;
		}
		else if(dir[i] == 'W')
		{
			x--;
		}
		else if(dir[i] == 'Z')
		{
			x = 0;
			y = 0;
		}
	}
	
	cout << x << " " << y;
}
