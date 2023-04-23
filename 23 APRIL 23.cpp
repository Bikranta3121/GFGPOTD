class Solution{
public:
    int minimumNumber(int n,vector<int> &arr){
    //   priority_queue <int> pq(arr.begin(),arr.end());
       
    //   int flag=0;
      
    //   int ans;
    //   while(!flag)
    //   {
    //       int x=pq.top();
    //       pq.pop();
    //       if(pq.empty() || pq.top()==0)
    //       {
    //           ans=x;
    //           flag=1;
    //           continue;
    //       }
    //       int y=pq.top();
    //       pq.push(x%y);
    //   }
    int ans=arr[0];
     for(int i=1;i<n;i++)
     {
         ans=__gcd(arr[i],ans);
     }
       return ans;
    }
};
