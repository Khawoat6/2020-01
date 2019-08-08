#include <iostream>
using namespace std;

int main()
{
	string dir;
	int k;
	int n=0,e=0,s=0,w=0;
	int highx,highy,lowx,lowy;
	cin >> dir;
	cin >> k;
	int sizedire = dir.size();
	int ans;
	
	if(sizedire == k)
	{
		ans = 0;
	}
	else if(sizedire != k)
	{
		for(int i=0;i<sizedire;i++)
		{
			if(dir[i] == 'N')
			{
				n++;
			}
			else if(dir[i] == 'E')
			{
				e++;
			}
			else if(dir[i] == 'S')
			{
				s++;
			}
			else if(dir[i] == 'W')
			{
				w++;
			}
		}
		if(n > s)
		{
			highy = n;
			lowy  = s;
		}
		if(s > n)
		{
			highy = s;
			lowy  = n;
		}
		if(e > w)
		{
			highx = e;
			lowx  = w;
		}
		if(w > e)
		{
			highx = w;
			lowx  = e;
		}
		
		k = k-(lowx+lowy);
		if(k < 0)
		{
			k = k * (-1);
		}
		
		ans = (highx+highy)-k;
		ans = ans*2;
	}
	cout << ans;
}
