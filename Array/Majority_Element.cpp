#include<bits/stdc++.h>
using namespace std;

int majorityElements(int arr[], int n){
int count = 1, res = 0;
for(int i=1; i<n; i++){
    if(arr[res] == arr[i])
        count++;
    else
        count--;
    if(count == 0){
        res = i;
        count = 1;
    }
}
count = 0;
for(int i=0; i<n; i++)   
    if(arr[res] == arr[i])
        count++;
if(count <= n/2)
    return -1;
else
    return res;
}

int main(){
    int n = 5;
    int arr[] = {8,3,4,8,8};

    cout << majorityElements(arr, n);

    return 0;
}