class Solution {
  public:
    int finLength(int n, vector<int> color, vector<int> radius) {stack<pair<int,int>> st;
        for(int i=0;i<n;i++)
        {
            if(st.empty())
             st.push({color[i],radius[i]});
            else if(st.top().first==color[i]  and st.top().second==radius[i])
            { 
                st.pop();
            }
            else
            {
                st.push({color[i],radius[i]});
            }
        }
        return st.size();}
};
