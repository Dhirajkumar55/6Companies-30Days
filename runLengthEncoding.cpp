// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

string encode(string src);    
 
int main() {
	
	int T;
	cin>>T;
	while(T--)
	{
		string str;
		cin>>str;
		
		cout<<encode(str)<<endl;
	}
	return 0;
}// } Driver Code Ends


/*You are required to complete this function */

string encode(string src)
{     
  //Your code here
    int n = src.size();
    string out = "";
    int count = 0;
    for(int i=0;i<n;i++){
        if(src[i]!=src[i-1] and i!=0){
            out+=src[i-1]+to_string(count);
            count = 0;
        }
        count++;
        
    }
    out+=src[n-1]+to_string(count);
    
    
    return out;
}     
 
