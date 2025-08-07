//Sameer Yasin Exp-6
//24070123092
#include<iostream>
using namespace std;
int main(){
    int n, x, y, s = 0;
    cout << "Enter your PRN/Roll number: ";
    cin >> n;
    while(n > 0){
        x = n % 10;
        s = s * 10 + x;
        n = n / 10;
    }
    cout << s;
}
/*
Output:
Enter your PRN/Roll number: 135
531
*/

