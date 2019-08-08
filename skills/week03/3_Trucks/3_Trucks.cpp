#include <iostream>
using namespace std;
int main()
{
    int n;
    int W;
    while(true)
    {
        cin >> n >> W;
        if(n==0 && W==0){
            return 0;
        }
        
        int count=0;
        int sum=0;
        int weight[n];
        for(int i=0; i<n; i++){
            cin >> weight[i];
        }
        for(int i=0; i<n; i++){
            sum = sum+weight[i];
            if(sum > W){
                count++;
                sum=0;
                i--;
            }
        }
        cout << count+1 << endl;
    }
}
// Phattaraphon Chomchaiyaphum 5930300585
