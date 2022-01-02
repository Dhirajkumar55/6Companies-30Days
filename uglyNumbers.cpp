// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

#define ull unsigned long long


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// #define ull unsigned long long
	/* Function to get the nth ugly number*/
	ull getNthUglyNo(int n) {
	    // code here
	    vector<ull> v;
	    v.push_back(1);
	    ull i=0,j=0,k=0,next = 0;
	    for(ull l = 0;l<n;l++){
	        next = min(2*v[i],min(3*v[j],5*v[k]));
	        
	        if(next == 2*v[i]) i++;
	        if(next == 3*v[j]) j++;
	        if(next == 5*v[k]) k++;
	        
	        v.push_back(next);
	        
	    }
	    return v[n-1];
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.getNthUglyNo(n);
        cout << ans << "\n";
    }
    return 0;
}
  // } Driver Code Ends