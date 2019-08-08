#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int x,y,sum,min=10;
	int yesx=0,yesy=0;
	cin >> x >> y;
	int array[x][y];
	for(int i=0;i<y;i++)
	{
		for(int j=0;j<x;j++)
		{
			cin >> array[i][j];
			if(array[i][j] < min)
			{
				min = array[i][j];
			}
		}
	}
	
	//check x
	for(int i=0;i<y;i++)
	{
		sum = 0;
		for(int j=0;j<x;j++)
		{
			if(array[i][j]==array[i][0] && array[i][j]==min)
			{
				//cout << "x" << i << "," << j << array[i][j] << endl;
				sum++;
				if(sum == x)
					yesx++;
			}
		}
	}
	//check y
	for(int i=0;i<x;i++)
	{
		sum = 0;
		for(int j=0;j<y;j++)
		{
			//cout << array[j][i];
			//cout << array[0][i];
			if(array[j][i]==array[0][i] && array[i][j]==min)
			{
				//cout << "y" << i << "," << j << array[j][i] << endl;
				sum++;
				if(sum == y)
					yesy++;
			}
		}
	}
	if(yesy > 0 && yesx > 0)
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}
}
