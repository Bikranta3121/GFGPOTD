class Solution{
  public:
    int rec(int target,int n,vector<int> &dp,int price[])
    {
        if(target==0) return 0;
        if(dp[target]!=-1) return dp[target];
        int take=0;
        for(int j=0;j<n;j++)
        {
          if(target-j>=1)
          {
              take=max(take,price[j]+rec(target-j-1,n,dp,price));
          }
        }
        return dp[target]=take;
    }
    int cutRod(int price[], int n) {
        vector<int> dp(n+1,-1);
        return rec(n,n,dp,price);
    }
    
};
