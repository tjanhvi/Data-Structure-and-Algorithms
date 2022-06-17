// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

class Solution
{
    public:
    //Function to find the minimum element in sorted and rotated array.
    int minNumber(int arr[], int low, int high)
    {
        int min_val = INT_MAX;
        while(low <= high){
            int mid = (low+high)/2;
            if(arr[low] <= arr[mid]){
                min_val = min(arr[low], min_val);
                low = mid + 1;
            }
            else if(arr[mid] <= arr[high]){
                min_val = min(arr[mid], min_val);
                high = mid - 1;
            }
        }
        return min_val;
    }
};

// { Driver Code Starts.


int main()
{
	
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;++i)
			cin>>a[i];	
		Solution obj;
		cout << obj.minNumber(a,0,n-1) << endl;
	}
	return 0;
}  // } Driver Code Ends