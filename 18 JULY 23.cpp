//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
	public:
	    int func(int i,int j,string &str,string &ans,vector<vector<int>> &dp)
	    {
	        if(i>=str.size() || j>=str.size())
	        {
	            return 0;
	        }
	        if(dp[i][j]!=-1) return dp[i][j];
	        int take=0;
	        if(i!=j and str[i]==str[j])
	        {
	            ans.push_back(str[i]);
	            take=max(take,1+func(i+1,j+1,str,ans,dp));
	            ans.pop_back();
	        }
	       else take=max({take,func(i+1,j,str,ans,dp),func(i,j+1,str,ans,dp),func(i+1,j+1,str,ans,dp)});
	        return dp[i][j]=take;
	    }
		int LongestRepeatingSubsequence(string str){
		    string ans="";
		    int n=str.size();
		    vector<vector<int>> dp(n+1,vector<int>(n+1,-1));
		    return func(0,0,str,ans,dp);
		    
		}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string str;
		cin >> str;
		Solution obj;
		int ans = obj.LongestRepeatingSubsequence(str);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends
