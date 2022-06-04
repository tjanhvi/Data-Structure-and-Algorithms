//Given an array of both negative and non-negative integers and a number k, find the maximum sum of k consecutive elements.

#include<bits/stdc++.h>
using namespace std;

//naive method--- O(n-k)*k
int windowSlidingTechnique(int arr[], int n, int k){
    int max_sum = INT_MIN;
    for(int i=0; i+k-1<n; i++){
        int sum = 0;
        for(int j=0; j<k; j++){
            sum += arr[i+1];
        }
        max_sum = max(sum, max_sum);
    }
    return max_sum;
}

//efficient method--- O(n)
int windowSlidingTech(int arr[], int n, int k){
    int curr_sum = 0;
    for(int i=0; i<k; i++){
        curr_sum += arr[i];
    }
    int max_sum = curr_sum;
    for(int i=k; i<n; i++){
        curr_sum += (arr[i] -arr[i-k]);
        max_sum = max(max_sum, curr_sum);
    }
    return max_sum;
}

int main(){
    int n = 6;
    int arr[] = {1, 8, 30, -5, 20, 7};
    int k;
    cin>>k;
    
    cout << windowSlidingTechnique(arr, n, k) << endl << windowSlidingTech(arr, n, k);


    return 0;
}


//Given an unsorted array of non-negative integers. Find of there is subarray with given sum.


#include<bits/stdc++.h>
using namespace std;

//navice method
bool window_slinding(int arr[], int n, int k){
    for (int i=0; i<n; i++){
        int sum=0;
        for(int j=i; j<n; j++){
            sum += arr[i];
        }
        if(sum == k){
            return true;
        }
    }
}

//efficient method--- O(n)
int windowSliding(int arr[], int n, int k){
    int curr_sum = 0;
    for(int i=0; i<k; i++){
        curr_sum += arr[i];
    }
    int max_sum = curr_sum;
    for(int i=k; i<n; i++){
        curr_sum += (arr[i] -arr[i-k]);
        max_sum = max(max_sum, curr_sum);
    }
    return max_sum;
}

int main(){
    int n = 6;
    int arr[] = {1, 4, 20, 3, 10, 5};
    int sum = 33;
    
    cout << windowSliding(arr, n, sum);


    return 0;
}