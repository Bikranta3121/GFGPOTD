static bool cmp (pair<int,int> &a,pair<int,int> &b)
        {
            if(a.first<0 and b.first>=0) return true;
            if(((a.first<0 and b.first<0)||(a.first>=0 and b.first>=0)) and (a.second<b.second)) 
                 return true;
            return false;
            
        }
        void Rearrange(int arr[], int n)
        {
           vector<pair<int,int>> ans;
           for(int i=0;i<n;i++)
           {
               ans.push_back({arr[i],i});
           }
           sort(ans.begin(),ans.end(),cmp);
           for(int i=0;i<n;i++)
           {
               arr[i]=ans[i].first;
           }
        }
