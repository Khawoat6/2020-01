#include<stdio.h>
#include<iostream>
using namespace std;


int main()
{
	int n,i;
	int sum=0;
	cout<<"Input: ";
	cin >> n ;
	
	for(i=1;i<=n;i++)
	{
		sum=sum+i;
	
	}
	cout<<"Output: "<<sum;
}
