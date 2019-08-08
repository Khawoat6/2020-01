#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
	int h;
	int t1,t2,t3;
	int sum = 0;
	
	cin>>h;
	cin>>t1;
	cin>>t2;
	cin>>t3;

	for(int i =1;i<=h;i++)
	{
		sum=h+t1+t2+t3;
	}
	//cout<<sum<<endl;
	

    if(sum>=80) 
       	cout<<"A"; 
    else if(sum>=75)
       	cout<<"B+"; 
    else if(sum>=70)
       	cout<<"B"; 
    else if(sum>=65)
       	cout<<"C+";
    else if(sum>=60)
       	cout<<"C"; 
    else if(sum>=55)
       	cout<<"D+"; 
    else if(sum>=50)
       	cout<<"D"; 
    else
       	cout<<"F"; 
    	//return 0; 
}
