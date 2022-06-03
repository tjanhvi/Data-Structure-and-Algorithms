#include<bits/stdc++.h>
using namespace std;

//1st method
int maxConsecutiveOneNaiveMethod(int arr[], int n){
    int count = 0;
    for(int i= 0; i<n; i++){
        int res = 0;
        for(int j=i; j<n; j++){
            if(arr[j] == 1) res++;
            else break;
        }
        count = max(count, res);
    }
    return count;
}

//2nd method
int maxConsecutiveOne(int arr[], int n){
    int count = 0,res = 0;
    for(int i= 0; i<n; i++){
        if(arr[i] == 0){
            res = 0;
        } 
        else{
            res++;
            count = max(count, res);
        }
    }
    return count;
}

int main(){
    int n =7;
    int arr[] = {0,1,1,1,0,1,1};
    cout << maxConsecutiveOneNaiveMethod(arr, n) << endl << maxConsecutiveOne(arr, n);

    return 0;
}