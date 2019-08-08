#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
	int n,w,tmp;
	cin>>n>>w;
	while(n !=0 && w !=0 ){
		int Arr[n];
		for(int i =1;i<=n;i++){
			cin>>Arr[i];
		}
		tmp=0;
		int count=0;
		for(int i =1;i<=n;i++){
			if (tmp <Arr[i]){
				tmp=w;
				count++;
				
			}
			tmp-=Arr[i];
		}
		cout<<count<<endl;
		cin>>n>>w;
	}
	
}
