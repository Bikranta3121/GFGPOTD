class Solution{
public:
    int LargButMinFreq(int arr[], int n) {
       map<int,int> m;
       for(int i=0;i<n;i++)
       {
           m[arr[i]]++;
       }
       int min_freq=INT_MAX;
       int ans=0;
       for(auto itr=m.begin();itr!=m.end();itr++)
       {
           int x=itr->first;
           int y=itr->second;
           if(min_freq>=y)
           {
               ans=x;
               min_freq=y;
           }
       }
      
       return ans;
    }
};

