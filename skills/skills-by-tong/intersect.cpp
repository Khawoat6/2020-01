#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	
	int num;
	int count=0;
	cin >> num;
	char file1[num];
	char file2[num];
	for(int i=0;i<num;i++)
	{
		cin >> file1[i];
	}
	
	for(int i=0;i<num;i++)
	{
		cin >> file2[i];
	}
	sort(file1,file1+num);
	sort(file2,file2+num);
	for(int i=0;i<num;i++)
	{
		//cout << "i" << i << endl;
		for(int j=0;j<num;j++)
		{
			//cout << "j" << j << endl;
			if(file1[i] == file2[j])
			{
				//cout << i << j << endl;
				cout << file1[i] << file2[j] << endl;
				count++;
				break;
			}
		}
	}
	cout << count << endl;
}
