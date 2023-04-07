class Solution{   
public:
     bool check(int j,string &str)
     {
         int i=0;
         while(i<j)
          {
              if(str[i++]!=str[j--])
               return false;
          }
          return true;
     }
    int addMinChar(string str){   
    int count;
    int n=str.size();
    for(int i=0;i<n;i++)
    {
     if(check(i,str))
      count=i+1;
    }
     return n-count;
    }
};
