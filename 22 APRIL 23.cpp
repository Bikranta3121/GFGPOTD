class Solution{
public:
    vector<long long> smallerSum(int n,vector<int> &arr){
        map<long long,long long> mp;
        map<long long,long long> m;
        vector<long long> v;
        for(int i=0;i<n;i++)
        {
            m[arr[i]]++;
        }
        long long int count=0;
        for(auto itr=m.begin();itr!=m.end();itr++)
        {
            int x=itr->first;
            int y=itr->second;
            mp[x]=count;
            count+=x*y;
        }
        
        for(int i=0;i<n;i++)
        {
            v.push_back(mp[arr[i]]);
        }
        return v;
    }
};
