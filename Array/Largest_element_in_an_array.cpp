#include<bits/stdc++.h>
using namespace std;

int largestElement(int arr[], int n){
    int max = arr[0];
    for(int i=0; i<n; i++){
        if(max < arr[i]){
            max = arr[i];
        }
    }
    return max;
}

int main(){
    int n = 5;
    int arr[] = {34,65,45,87,12};
    
    cout << largestElement(arr, n);

    return 0;
}