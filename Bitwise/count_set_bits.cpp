#include<bits/stdc++.h>
using namespace std;

int countset(int n){
    int count = 0;
    while(n>0){
        n = (n & (n-1));
        count++;
    }
    return count;
}


int main(){
   
    cout << countset(4);
    

    return 0;
}