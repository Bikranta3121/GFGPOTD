class Solution {
  public:
    long long maxDiamonds(int A[], int N, int k) {
        priority_queue<int> pq;
        for(int i=0;i<N;i++)
        {
            pq.push(A[i]);
        }
        long long sum=0;
        while(k-- and !pq.empty())
        {
            int x=pq.top();
            pq.pop();
            sum+=x;
            pq.push(x/2);
            
        }
        return sum;
        
    }
};
