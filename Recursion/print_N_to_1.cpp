#include<bits/stdc++.h>
using namespace std;

// void reverseNumber(int n){
//     for(int i = n; i > 0; i--){
//         cout << i << " ";
//     }
// }

void reverseNumber(int n){
    if(n == 0) return;
    cout << n << " ";
    reverseNumber(n-1);
}

int main(){
    reverseNumber(5);

    return 0;
}