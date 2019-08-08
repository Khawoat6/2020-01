#include <iostream>
using namespace std;

int main()
{
	int score[4];
	for(int i=0;i<4;i++)
	{
		cin >> score[i];
	}
	/*
	for(int i=0;i<4;i++)
	{
		cout << score[i];
	}
	*/
	
	int sum = 0;
	for(int i=0;i<4;i++)
	{
		sum = sum + score[i];
	}
	
	if(sum >= 0 & sum <= 49)
	{
		cout << "F" << endl;
	}
	
	else if(sum >= 0 & sum <= 49)
	{
		cout << "F" << endl;
	}
	
	else if(sum >= 50 & sum <= 54)
	{
		cout << "D" << endl;
	}
	
	else if(sum >= 55 & sum <= 59)
	{
		cout << "D+" << endl;
	}
	else if(sum >= 60 & sum <= 64)
	{
		cout << "C" << endl;
	}
	
	else if(sum >= 65 & sum <= 69)
	{
		cout << "C+" << endl;
	}
	
	else if(sum >= 70 & sum <= 74)
	{
		cout << "B" << endl;
	}
	
	else if(sum >= 75 & sum <= 79)
	{
		cout << "B+" << endl;
	}
	
	else if(sum >= 80 & sum <= 100)
	{
		cout << "A" << endl;
	}
}
