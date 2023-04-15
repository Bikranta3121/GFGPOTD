class Solution {
  public:
    int totalTime(int n, vector<int> &arr, vector<int> &time) {
        int total=0;
        unordered_set<int> s;
        s.insert(arr[0]);
        for(int i=1;i<n;i++)
        {
            if(s.find(arr[i])==s.end())
            {
                total++;
                s.insert(arr[i]);
            }
            else
            {
                total+=time[arr[i]-1];
            }
        }
        return total;
    }
};
