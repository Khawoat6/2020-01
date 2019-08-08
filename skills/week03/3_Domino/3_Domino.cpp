#include <stdio.h>
#include <iostream>
using namespace std;

int num_solution(int n)
{
    /*
         _______________________
        |   n   |   solution    |
        |   1   |       1       |
        |   2   |       2       |
        |   3   |       3       |
        |   4   |       5       |
     
     Jn = จำนวนการวาง domino ลงในกล่องตามความยาว n
     แบ่งออกเป็น 2 กลุ่ม
        [1] n-1 วางได้ Jn-1 วิธี
        [2] n-2 วางได้ Jn-2 วิธี
     
        +++++++++++++++++++++++++
        +   Jn = Jn-1 + Jn-2    +  ; n>= 3
        +   J1 = 1, J2 = 2      +
        +++++++++++++++++++++++++
     
     */
    int jn , j1 = 1, j2 = 2;
    if (n==j1 | n==j2){
        return (n); // Jn=1, Jn=2
    }
    else{
        jn = num_solution(n-1) + num_solution(n-2); // Jn = Jn-1 + Jn-2
        return (jn);
    }
}

int main ()
{
    int n;
    cin >> n;
    cout << num_solution(n) << endl;
    getchar();
    return 0;
}