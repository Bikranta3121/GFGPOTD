class Solution {
  public:
     long long  mod=1000000007;
    int sumOfNaturals(int n) {
               int mod = 1000000007;
        long ans= ((long)n*(n+1))/2;
        return (int)(ans%mod);
    }
};
