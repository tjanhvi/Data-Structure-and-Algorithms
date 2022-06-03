#include<bits/stdc++.h>
using namespace std;

// void printNumber(int n){
//     for(int i = 1; i <= n; i++){
//         cout << i << " ";
//     }
// }

void printNumber(int n){
    if(n == 0) return;
    printNumber(n-1);
    cout << n << " ";
}

int main(){
    printNumber(5);
    
    return 0;
}