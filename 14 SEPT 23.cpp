//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{

	public:
	int mod=1e9+7;
	int solve(int i,int t,int sum,int arr[],int n,vector<vector<int>> &dp)
	{
	    if(i==n) return 0;
	    if(dp[i][t]!=-1) return dp[i][t];
	    int take=0;
	    if(arr[i]+t<=sum){
	       if(arr[i]+t==sum) take++;
	        take+=solve(i+1,arr[i]+t,sum,arr,n,dp);
	    }
	    take+=solve(i+1,t,sum,arr,n,dp);
	    return dp[i][t]=take%mod;
	    
	}
	int perfectSum(int arr[], int n, int sum)
	{
	    if(sum==0)
	    {
	        int count=0;
	        for(int i=0;i<n;i++)
	        {
	            if(arr[i]==0) count++;
	        }
	        int x=1;
	        while(count--)
	        {
	            x=(x%mod*2)%mod;
	        }
	        return x;
	    }
	    vector<vector<int>> dp(n+1,vector<int> (sum+1,0));
	    for(int i=n-1;i>=0;i--)
	    {
	        for(int j=sum;j>=0;j--)
	        {
	           int take=0;
               if(arr[i]+j<=sum){
                    if(arr[i]+j==sum) take++;
                    take+=dp[i+1][arr[i]+j];
               }
               take+=dp[i+1][j];
               dp[i][j]=take%mod; 
	        }
	    }
       return dp[0][0];
	}
	  
};

//{ Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n, sum;

        cin >> n >> sum;

        int a[n];
        for(int i = 0; i < n; i++)
        	cin >> a[i];

       

	    Solution ob;
	    cout << ob.perfectSum(a, n, sum) << "\n";
	     
    }
    return 0;
}

// } Driver Code Ends
