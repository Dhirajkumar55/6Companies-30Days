// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int doOverlap(int L1[], int R1[], int L2[], int R2[]) {
        // code here
        
        int ans = 1;

        //If one rectangle is on the left side or right side of the other rectangle
        if(L2[0]>R1[0] || L1[0]>R2[0])
            ans = 0;
            
        // If one rectangle is either on top or bottom of the other rectangle
        if(R2[1]>L1[1] || R1[1]>L2[1])
            ans = 0;
            
        return ans;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int p[2], q[2], r[2], s[2];
        cin >> p[0] >> p[1] >> q[0] >> q[1] >> r[0] >> r[1] >> s[0] >> s[1];
        Solution ob;
        int ans = ob.doOverlap(p, q, r, s);
        cout << ans << "\n";
    }
}  // } Driver Code Ends