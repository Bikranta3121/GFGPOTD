class Solution{
public:
    int minimumTime(int N,int cur,vector<int> &pos,vector<int> &time){
        int count=INT_MAX;
        for(int i=0;i<N;i++)
        {
          count=min(count,abs(pos[i]-cur)*time[i]);  
        }
        return count;
    }
};
