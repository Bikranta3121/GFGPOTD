class Solution{
public:
    int mod=1000000007;
    int dp(int n,int r,vector<vector<int>> &v)
    {
        if(n<r) return 0;
        if(n==r || r==0) return 1;
        if(v[n][r]!=-1) return v[n][r];
        return v[n][r]=(dp(n-1,r-1,v)+dp(n-1,r,v))%mod;
    }
    
    int nCr(int n, int r){
        vector<vector<int>> v(n+1,vector<int>(r+1,-1));
        return dp(n,r,v);
    }
};
