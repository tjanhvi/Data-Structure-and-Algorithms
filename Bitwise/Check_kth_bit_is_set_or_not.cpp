#include<bits/stdc++.h>
using namespace std;

string leftShiftOperator(int n, int k){
    if(n & (1 << (k-1)) != 0){
        return "yes";
    } 
    return "no";
    
}

string rightShiftOperator(int n, int k){
    if((n << (k-1)) & 1 == 1){
        return "yes";
    } 
    return "no";
    
}

int main(){

    cout << leftShiftOperator(5,3);
    cout << rightShiftOperator(5,3);

    return 0;
}