int palindrome(int i,int j,string &S,int &start,int &end)
    {
        while(i>=0 and j<S.size())
        {
            if(S[i]!=S[j]) break;
            i--;
            j++;
        }
        start=i+1;
        end=j-1;
        return j-i-1;
    }
    string longestPalin (string S) {
        int max_val=1;
        int n=S.size();
        string str=S.substr(0,1);
       for(int i=0;i<n-2;i++)
       {
           if(S[i]==S[i+2])
           {
               int start=i;
               int end=i+2;
               if(max_val < palindrome(i-1,i+3,S,start,end))
               {
                   max_val=end-start+1;
                   str=S.substr(start,max_val);
               }
           }
           if(S[i]==S[i+1])
           {
               int start=i;
               int end=i+1;
               if(max_val < palindrome(i-1,i+2,S,start,end))
               {
                   max_val=end-start+1;
                   str=S.substr(start,max_val);
               }  
           }
       }
       if(S[n-2]==S[n-1])
       {
               int start=n-2;
               int end=n-1;
               if(max_val < palindrome(n-3,n,S,start,end))
               {
                   max_val=end-start+1;
                   str=S.substr(start,max_val);
               }
       }
       return str;
    }
