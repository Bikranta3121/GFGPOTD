class Solution {
public:
    int func(int i,int j,string &s1,string &s2,vector<vector<int>> &dp)
    {
        if(i>=s1.size() and j>=s2.size()) return 0;
        if(i>=s1.size())
        {
            int sum=0;
            while(j<s2.size())
            {
               sum+=97+s2[j]-'a';
               j++;
            }
            return sum;
        }
        if(j>=s2.size())
        {
            int sum=0;
            while(i<s1.size())
            {
               sum+=97+s1[i]-'a';
               i++;
            }
            return sum;

        }
        if(dp[i][j]!=-1) return dp[i][j];
        int take=INT_MAX;
        int notake=INT_MAX;
        if(s1[i]==s2[j])
        {
            take=func(i+1,j+1,s1,s2,dp);
        }
        else{
         notake=min({97+s1[i]-'a'+func(i+1,j,s1,s2,dp),97+s2[j]-'a'+func(i,j+1,s1,s2,dp),notake} );
         }
        return dp[i][j]=min(notake,take);        
    }
    int minimumDeleteSum(string s1, string s2) {
        int n=s1.size();
        int m=s2.size();
        vector<vector<int>> dp(n+1,vector<int>(m+1,-1));
        return func(0,0,s1,s2,dp);

    }
};
