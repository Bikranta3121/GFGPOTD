class Solution {
  public:
    int equalSum(int N, vector<int> &A) {
        // code here
        int sum=0;
        int before_sum=0;
        for(int i=0;i<N;i++)
        {
            sum+=A[i];
        }
        for(int i=0;i<N;i++)
        {
            int after_sum=sum-before_sum-A[i];
            if(before_sum==after_sum)
             return i+1;
            before_sum+=A[i]; 
        }
        return -1;
    }
};
