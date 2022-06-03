#include<bits/stdc++.h>
using namespace std;

int maxPieces(int n, int a, int b, int c){
    if(n == 0) return 0;
    if(n < 0) return -1;
    int count = max(maxPieces(n-a,a,b,c),
                    maxPieces(n-b,a,b,c),
                    maxPieces(n-c,a,b,c));

    if(count == -1)
        return -1;
    return count+1;
}

int main(){
    cout << maxPieces(23,11,9,12);

    return 0;
}