class Solution{   
    vector<string> res;
  public:
    
    string secondSmallest(int S, int D){
       vector<int>ans;  
       string res="";
       while(D!=0)
       {
           int x=9;
           
           if(D!=1)
          {
           while(x>=S)
           {
              x--;
           }
           ans.push_back(x);
           S-=x;
          }
          if(D==1 and S>=10)
           return "-1";
          else if(D==1)
          {
            ans.push_back(S);
          }
          D--;
       }
       int i=0;
       //for(int a=0;a<ans.size();a++) cout<<ans[a];
         while(i<ans.size() and ans[i]==9)
         {
           i++;
         }
         if(i==0) 
         {
             ans[i]-=1;
             ans[i+1]+=1;
         }
         else if(i>=ans.size())
         {
             return "-1";
         }
         else
         {
             ans[i-1]-=1;
             ans[i]+=1;
         }
         for(int x=ans.size()-1;x>=0;x--)
          res+=to_string(ans[x]);
       return res; 
    }
};
