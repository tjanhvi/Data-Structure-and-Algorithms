// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    vector<int> quadraticRoots(int a, int b, int c) {
        // x = (-b ± √(b2 − 4ac))/(2a)
        vector<int> roots;
        double val = sqrt(b*b - 4*a*c);
        if(b*b >= 4*a*c){
            double x1, x2;
            x1 = (floor((-b + val)/(2.0*a)));
            x2 = (floor((-b - val)/(2.0*a)));
            
            if(x1 >= x2){
                roots.push_back(x1);
                roots.push_back(x2);
            } else{
                roots.push_back(x2);
                roots.push_back(x1);
            }
        } 
        else{
           roots.push_back(-1);
        }
        
        return roots;

    }
};

// { Driver Code Starts.

int main() {
    int T;
    cin >> T;
    while (T--) {
        int a, b, c;
        cin >> a >> b >> c;
        Solution ob;
        vector<int> roots = ob.quadraticRoots(a, b, c);
        if (roots.size() == 1 && roots[0] == -1)
            cout << "Imaginary";
        else
            for (int i = 0; i < roots.size(); i++) cout << roots[i] << " ";
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends