#include <iostream>
using namespace std;
int main()
{
    int n, w, sum, count;
    cin >> n >> w ;
    if(n==0 && w==0){
        return 0;
    }
    else{
        while (true) {
            int a[n];
            for(int i=0;i<n;i++){
                cin >> a[i];
            }
            sum=0; count=0;
            for(int i=1;i<n;i++){
                if(sum<a[i]){
                    sum=w;
                    count=count+1;
                }
                sum = sum - a[i];
            }
            cout<<count+1<<endl;
            cin >> n >> w;
        }
    }
}
