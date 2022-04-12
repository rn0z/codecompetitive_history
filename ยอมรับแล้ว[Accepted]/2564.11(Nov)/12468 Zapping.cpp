#include <bits/stdc++.h>
using namespace std;


int main(){

    int a,b;

    while(scanf("%d %d",&a,&b), a != -1){
        int op1{}, op2{};
        if (a > b) {
            op1 = a - b;
            op2 = (100 - a) + b;
            
        }
        if (a < b) {
            op1 = b -a;
            op2 = (100 - b) + a;
        }

        cout << ((op1 > op2)?op2:op1) << '\n';

    }

    return 0;
}