#include<bits/stdc++.h>
using namespace std;

bool powerOfTwo(int n){
    if(n == 0)
        return false;
    return ((n & (n-1)) == 0);
}

int main(){
    cout << powerOfTwo(4);

    return 0;
}