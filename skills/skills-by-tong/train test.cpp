#include <iostream>
using namespace std;

int main()
{
	int num,rob;
	int first,last;
	cin >> num >> rob;
	cout<<"00000"<<endl;
	int array1[num],array2[num];
	for(int i=0;i<num;i++)
	{
		array1[i] = i+1; 
	}
	for(int i=0;i<rob;i++)
	{
		cin >> first >> last;
		cout << "1111" << endl;
		for(int j=0;j<num;j++)
		{
			if(first == array1[j])
			{
				cout << "2222" << endl;
				first = j;
			}
			if(last == array1[j])
			{
				cout << "2222" << endl;
				last = j;
			}
 		}
		for(int j=0;j<first;j++)
		{
			cout << "3333" << endl;
			array2[j] = array1[j];
		}
		for(int j=first;j<=last;j++)
		{
			cout << "4444" << endl;
			array2[j] = array1[j];
		}
		for(int j=last+1;j<num;j++)
		{
			cout << "5555" << endl;
			array2[j] = array1[j];
		}
		for(int j=0;j<num;j++)
		{
			cout << "6666" << endl;
			array1[j] = array2[j];
		}
	}
	for(int i=0;i<num;i++)
	{
		cout << array2[i] << " " ;
	}
}
