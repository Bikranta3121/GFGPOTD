class Solution
{
    public:
    // #define MAX 1000
    vector<vector<int>> uniqueRow(int M[MAX][MAX],int row,int col)
    {
        //Your code here
        unordered_set<string> st;
        vector<vector<int>> ans;
        for(int i=0;i<row;i++)
        {
            vector<int> v;
            string str="";
            for(int j=0;j<col;j++)
            {
                v.push_back(M[i][j]);
                str+=to_string(M[i][j]);
            }
            if(st.find(str)==st.end())
            {
                ans.push_back(v);
                st.insert(str);
            }
            
        }
        return ans;
    }
};
