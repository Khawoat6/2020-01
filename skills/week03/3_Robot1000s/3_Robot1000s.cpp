
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main()
{
    string dir;
    int k;
    int n=0, s=0, e=0, w=0;
    int high_x, high_y, low_x, low_y;
    cin >> dir;
    cin >> k;
    int sizedire = dir.size();
    int ans;
    
    if(sizedire == k){
        ans = 0;
    }
    else if(sizedire != k)
    {
        for(int i=0;i<sizedire;i++)
        {
            if(dir[i] == 'N'){
                n++;
            }
            else if(dir[i] == 'S'){
                s++;
            }
            else if(dir[i] == 'E'){
                e++;
            }
            else if(dir[i] == 'W'){
                w++;
            }
        }
        if(n > s){
            high_y = n;
            low_y = s;
        }
        if(s > n){
            high_y = s;
            low_y = n;
        }
        if(e > w){
            high_x = e;
            low_x = w;
        }
        if(w > e){
            high_x = w;
            low_x = e;
        }
        
        k = k-(low_x+low_y);
        if(k < 0){
            k = k * (-1);
        }
        
        ans = (high_x+high_y)-k;
        ans = ans*2;
    }
    cout << ans << endl;
}

