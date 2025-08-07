//Sameer Yasin Exp-6
//24070123092
#include<iostream>
using namespace std;
int main(){
    int i;
    for(i=0;i<11;i++)
    {
        if (i%2==0){
            cout << i << endl;
        }
        else{
            continue;
        }
    }
}
/*
Output:
0
2
4
6
8
10
*/
