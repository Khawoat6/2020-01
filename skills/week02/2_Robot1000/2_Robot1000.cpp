#include <iostream>
using namespace std;

int main()
{
    string direction;
    int x=0,y=0;
    cin >> direction;
    for(int i=0;i<direction.size();i++){
        if(direction[i] == 'N'){
            y++;
        }
        else if(direction[i] == 'S'){
            y--;
        }
        else if(direction[i] == 'E'){
            x++;
        }
        else if(direction[i] == 'W'){
            x--;
        }
        else if(direction[i] == 'Z'){
            x = 0;
            y = 0;
        }
    }
    cout << x << " " << y << endl;
    // input
    // NNEESW : 1 1
    // NNEESWZEE : 2 0
    // NWSSSSE : 0 -3
}