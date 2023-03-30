int minimumInteger(int N, vector<int> &A) {
       // code here
        long long int sum=0;
        int min=INT_MAX;
        for(int i=0;i<(long)N;i++)
        {
            sum=sum+A[i];
        }
        
        for(int i=0;i<(long)N;i++)
        {
            if(sum<=(long)N*A[i])
            {
                if(A[i]<min)
                min=A[i];
            }
        }
        return min;
    }
