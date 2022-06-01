#include<bits/stdc++.h>
using namespace std;

int oneOddOccuring(int arr[], int n){
    int res = 0;
    for(int i = 0; i < n; i++){
        res = res ^ arr[i];
    } 
    return res;
    
}

int main(){
    int n = 7;
    int arr[] = {4,3,4,4,4,5,5};
    cout << oneOddOccuring(arr, n);
    return 0;
}