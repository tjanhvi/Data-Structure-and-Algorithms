// { Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int digitsInFactorial(int n)
    {
        if(n <= 0){
            return 0;
        }
        else if(n == 1){
            return 1;
        }
        else{
            double sum = 0;
            for(int i = 2; i < n+1; i++){
                sum += log10(i);
            }
            return floor(sum) + 1;
        }
        
    }
};

// { Driver Code Starts.

int main()
{
    int T;
    
    //taking testcases
    cin>>T;
    while(T--)
    {
        int N;
        
        //taking N
        cin>>N;
        Solution ob;
        //calling method digitsInFactorial()
        cout<<ob.digitsInFactorial(N)<<endl;
    }
    return 0;
}
  // } Driver Code Ends