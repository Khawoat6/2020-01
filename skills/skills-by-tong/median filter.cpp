#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int row,col,size;
	cin >> col >> row >> size;
	row = row + 2;
	col = col + 2;
	int in[row][col];
	//int fil4[5],fil8[9];
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			if(i==0 || j==0 || i==row-1 || j==col-1) 
			{
				in[i][j] = 0;
			}
			else
				cin >> in[i][j];
		}
	}
	/*for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			cout << in[i][j];
		}
		cout << endl;
	}*/
	for(int i=1;i<row-1;i++)
	{
		for(int j=1;j<col-1;j++)
		{
			if(size == 4)
			{
				int fil4[5] = {in[i-1][j],in[i][j-1],in[i][j],in[i][j+1],in[i+1][j]};
				sort(fil4,fil4+5);
				cout << fil4[2] << " ";
			}
			else if(size == 8)
			{
				int fil8[9] = {in[i-1][j-1],in[i-1][j],in[i-1][j+1],in[i][j-1],in[i][j],in[i][j+1],in[i+1][j-1],in[i+1][j],in[i+1][j+1]};
				sort(fil8,fil8+9);
				cout << fil8[4] << " ";
			}
		}
		cout << endl;
	}
}
