    long long maxPossibleValue(int N,vector<int> A, vector<int> B) {
        long long mi=1e10;
          
          long long ans=0,totalSticks=0;
          for(int i=0;i<N;i++)
          {
                if(B[i]%2==1)
                B[i]--;
                
                if(B[i]>=2)
                {
                     mi=min(mi,(long long)A[i]);
                }
                totalSticks+= B[i];
                ans+= A[i]*B[i];
          }
          if(totalSticks%4!=0)
          {
                ans-=2*mi;
          }
          return ans;
    }
