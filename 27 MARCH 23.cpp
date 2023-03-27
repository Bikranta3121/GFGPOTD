class Solution {
  public:
    int f(vector<int> &arr,int i,int target,int k,vector<vector<vector<int>>> &dp)
    {
      if(i==0)
      {
          if(k==0 && target==0) return 1;
          return 0;
      }
      if(dp[i][target][k]!=-1) return dp[i][target][k];
      int pick=0;
      if(arr[i-1]<=target)
      {
          pick=f(arr,i,target-arr[i-1],k-1,dp);
      }
      int notpick=f(arr,i-1,target,k,dp);
      dp[i][target][k]=pick+notpick;
    }
    int countWaystoDivide(int N, int K) {
       vector<int> arr(N,0);
       for(int i=0;i<N;i++)
       {
           arr[i]=i+1;
       }
       vector<vector<vector<int>>> dp (N+1,vector<vector<int>>(N+1,vector<int>(K+1,-1)));
       return f(arr,N,N,K,dp);
    }
};
