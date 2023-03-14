class Solution{
    public:
        int maxCoins(int n, vector <int> &a)
        {
            int dp[n][n];
            for(int g=0; g<n; g++) {
                for(int i=0,j=g; j<n; i++,j++) {
                    int val = INT_MIN;
                    for(int k=i; k<=j; k++) {
                        int lft = k==i ? 0 : dp[i][k-1];
                        int rght = k==j ? 0 : dp[k+1][j];
                        int curr = a[k];
                        if(i-1>=0) curr *= a[i-1];
                        if(j+1<n) curr *= a[j+1];
                        val = max(val, lft + rght + curr);
                    }
                    dp[i][j] = val;
                }
            }
            return dp[0][n-1];
        }
};
