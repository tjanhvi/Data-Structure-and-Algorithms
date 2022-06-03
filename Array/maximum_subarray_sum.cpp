#include<bits/stdc++.h>
using namespace std;

//1st method
int maximumSubarraySumNaiveMethod(int arr[], int n){
    int res = arr[0];
    for(int i=0; i<n; i++){
        int curr = 0;
        for(int j=i; j<n; j++){
            curr = curr + arr[j];
            res = max(res, curr);
        }
    }
    return res;
}

//2nd method
int maximumSubarraySum(int arr[], int n){
    int res = arr[0];
    int maxEnding = arr[0];
    for(int i=0; i<n; i++){
        maxEnding = max(maxEnding + arr[i], arr[i]);
        res = max(res, maxEnding);
        }
    return res;
}

int main(){
    int n = 7;
    int arr[] = {2, 3, -8, 7, -1, 2, 3};
    cout << maximumSubarraySumNaiveMethod(arr, n) << endl << maximumSubarraySum(arr, n);

    return 0;
}