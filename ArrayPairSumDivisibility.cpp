// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    bool canPair(vector<int> nums, int k) {
        // Code here.
        if(nums.size()&1) return false;
        
        int sum = 0;
        for(auto i:nums){
            sum+=i;
        }
        
        if(sum%k) return false;
        
        unordered_map<int,int> mp;
        for(auto i:nums){
            mp[i%k]++;
        }
        
        for(int i=0;i<nums.size();i++){
            int res = nums[i]%k;
            if(res==0){
                if(mp[0]&1) return false;
            }
            
            else if(mp[res]!=mp[k-res])
                return false;
        }
        
        return true;
    }
};

// { Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, k;
        cin >> n >> k;
        vector<int> nums(n);
        for (int i = 0; i < nums.size(); i++) cin >> nums[i];
        Solution ob;
        bool ans = ob.canPair(nums, k);
        if (ans)
            cout << "True\n";
        else
            cout << "False\n";
    }
    return 0;
}  // } Driver Code Ends