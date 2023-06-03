class Solution{
public:
    int maxEqualSum(int N1,int N2,int N3,vector<int> &S1,vector<int> &S2,vector<int> &S3){
        int i,j,k;
        i=0;j=0;k=0;
        int s1,s2,s3;
        s1=0,s2=0,s3=0;
        for(i=0;i<N1;i++)
        {
            s1+=S1[i];
        }
        for(j=0;j<N2;j++)
        {
            s2+=S2[j];
        }
        for(k=0;k<N3;k++)
        {
            s3+=S3[k];
        }
        i=j=k=0;
        while(i<N1 and j<N2 and k<N3)
        {
            if(s1==s2 and s2==s3) break;
            else if(s1>=s2 and s1>=s3)
            {
                s1-=S1[i];
                i++;
            }
            else if(s2>=s1 and s2>=s3)
            {
                s2-=S2[j];
                j++;
            }
            else if(s3>=s1 and s3>=s2)
            {
                s3-=S3[k];
                k++;
            }
        }
        if(s1==s2 and s2==s3) return s1;
        return 0;
    }
};
