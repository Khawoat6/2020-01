#include<iostream>
using namespace std;

int main(){
int n;
cin>>n;
int pin[n][n];
for(int i=0; i<n; i++){
    for (int j=0; j<n; j++){
        cin>>pin[i][j];
    }
}
int islands = 0;
for (int i=0; i<n; i++){
    for(int j=0; j<n; j++){
        if (pin[i][j]==0){
            if (pin[i][j+1]!=0 && (pin[i-1][j]!=0 || i==0)){
                islands++;
            }
        }
    }
}
cout<<islands;
}
