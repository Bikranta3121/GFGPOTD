class Solution {
public:
    vector<int> findMaxRow(vector<vector<int>> mat, int N) {
        int max_one=0;
        int row=0;
        for(int i=0;i<N;i++)
        {
            int count=0;
            for(int j=0;j<N;j++)
            {
             count+=mat[i][j];
            }
            if(max_one<count)
            {
                max_one=count;
                row=i;
            }
        }
        return {row,max_one};
    }
};
