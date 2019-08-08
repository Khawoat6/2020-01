#include<stdio.h>
#include<iostream>
#include <stdlib.h>
using namespace std;

int menu()
{
	cout << "======= MENU =======" << endl;
	cout << "1) Insert " << endl;
	cout << "2) Delete " << endl;
	cout << "3) Exit " << endl;
	cout << "Please choose > ";
	int choose;
	cin >> choose;
	return choose;
}

void printlist(int tmp[], int size)
{
	cout << "List : ";
	for(int i = 0; i < size; i++)
	{
		cout << tmp[i] << " ";
	}
	cout << endl;
}

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
	cout << endl << endl;
	
	// 2   =========================================
	
	int list[10];
	int size = 0, n, countd;
	
	while(1)
	{
		switch(menu())
		{
			case 1 :
				cout << "Insert : ";
				cin >> n;
				if(size == 10)
				{
					cout << "List : Full!!!" << endl;
				}
				else if(size == 0)
				{
					cout << "Insert first" << endl;
					list[0] = n;
					size++;
					printlist(list, size);
				}
				else if(n <= list[0])
				{
					cout << "Insert front" << endl;
					for(int i = size; i > 0; i--)
					{
						list[i] = list[i-1];
					}
					list[0] = n;
					size++;
					printlist(list, size);
				}
				else if(n >= list[size-1])
				{
					cout << "Insert last" << endl;
					list[size] = n;
					size++;
					printlist(list, size);
				}
				else
				{
					cout << "Insert middle" << endl;
					for(int i = 1; i < size; i++)
					{
						if(n <= list[i])
						{
							for(int j = size; j > i; j--)
							{
								list[j] = list[j-1];
							}
							list[i] = n;
							size++;
							break;
						}
					}
					printlist(list, size);
				}
				break;
			case 2 :
				if(size == 0)
				{
					cout << "List empty!!!" << endl;
					break;
				}
				cout << "Delete : ";
				cin >> n;
				countd = 0;
				for(int i = 0; i < size; i++)
				{
					if(n == list[i])
					{
						for(int j = i; j < size-1; j++)
						{
							list[j] = list[j+1];
						}
						size--;
						printlist(list, size);
						countd = 1;
						break;
					}
				}
				if(countd == 0)
				{
					cout << "No data!!" << endl;
				}
				break;
				
			case 3 :
				exit(1);
		}
	}
						
}
