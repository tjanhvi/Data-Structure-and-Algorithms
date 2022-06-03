#include<bits/stdc++.h>
using namespace std;

int SecondLargestElement(int arr[], int n){
    int res = -1, largest = 0;
    for(int i=1; i<n; i++){
        if(arr[i] > arr[largest]){
            res = largest;
            largest = i;
        }
        else if(arr[i] != arr[largest]){
            if(res == -1 || arr[i] > arr[res])
                res = i;
        }
    }
    return res;
}

int main(){
    int n = 5;
    int arr[] = {34,65,45,87,12};
    
    cout << SecondLargestElement(arr, n);

    return 0;
}