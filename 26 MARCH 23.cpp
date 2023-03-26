class Solution {
  public:
    int unvisitedLeaves(int N, int leaves, int frogs[]) {
        vector<int> vis(leaves+1,0);
        sort(frogs,frogs+N);
        for(int i=0;i<N;i++)
        {
            if(frogs[i]<=vis.size()-1 and !vis[frogs[i]])
            {
                int x=1;
                while(x*frogs[i]<=vis.size()-1)
                {
                    vis[x*frogs[i]]=1;
                    x++;
                }
            }
        }
        int count=0;
        for(int i=1;i<=leaves;i++)
        {
           if(!vis[i]) count++; 
        }
        return count;
    }
};
