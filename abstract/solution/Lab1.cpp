#include<stdio.h>
#include<iostream>
#include <stdlib.h>
using namespace std;

int main()
{
	char arr[4][4] = {{'T', 'H', 'I', 'S'},
						{'W', 'A', 'T', 'S'},
						{'O', 'A', 'H', 'G'},
						{'F', 'G', 'D', 'T'}};
	
	// 1.1 ========================================
	
	cout << "Output 1 : " << endl;	
	for(int i = 0;i < 4; i++)
	{
		for(int j = 0; j < 4; j++)
		{
			for(int k = j; k < 4; k++)
			{
				for(int l = j; l <= k; l++)
				{
					cout << arr[i][l];
				}
				cout << " ";
			}
		}
		cout << endl;
	}
	
	// 1.2 ========================================
	
	cout << endl << "Output 2 : " << endl;
	for(int i = 0; i < 7; i++)
	{
		for(int j = i; j >= 0 && i <= 3; j--)
		{
			cout << arr[j][abs(i-j)];
		}
		for(int j = 3; j >= i-3 && i > 3; j--)
		{
			cout << arr[j][abs(i-j)];
		}
		cout << " ";
	}					
}
