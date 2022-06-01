#include<bits/stdc++.h>
using namespace std;

int missingNumber(int arr[], int n){
    int total = ((n+1)*(n+2))/2;
    int sum = 0;
    for(int i=0; i<n; i++){
        sum = sum + arr[i];
    }

    int diff = total - sum;
    return diff;
}

int missingNumber(int arr[], int n){
    int res = 0;
    for(int i = 0; i < n; i++){
        res = res ^ arr[i];
    } 
    return res-1;
}

int main(){
    int n = 3;
    int arr[] = {1,4,3};
    cout << missingNumber(arr, n);

    return 0;
}