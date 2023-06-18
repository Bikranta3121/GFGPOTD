class Solution {
  public:
    int distributeTicket(int n, int k) {
      deque<int> q;
      for(int i=1;i<=n;i++)
      {
          q.push_back(i);
      }
      int flag=0;
      
      while(q.size()>1)
      {
        int x=k;
        while(q.size()>1 and x--)
        {
            q.pop_front();
        }
        x=k;
        while(q.size()>1 and x--)
        {
            q.pop_back();
        }
      }
      return q.front();
    }
};
