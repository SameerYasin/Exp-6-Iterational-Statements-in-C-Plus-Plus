//Sameer Yasin Exp-7
//24070123092
#include<iostream>
using namespace std;
int main(){
    int i, j, x = 1;
    int n = 5; // Changed to 5 to match the output pattern
    for(i = 1; i <= n; i++){
        for(j = 1; j <= i; j++){
            cout << x << " ";
            x = x + 1;
        }
        cout << endl;
    }
}
/*
Output:
1 
2 3
4 5 6
7 8 9 10
11 12 13 14 15
*/
