class Solution
{
    public:
    int countSubstring(string S)
    {
       int upper;
       int lower;
       int count=0;
       for(int i=0;i<S.size();i++)
       {
           upper=0;
           lower=0;
           if(isupper(S[i]))
            upper++;
           else lower++;
           for(int j=i+1;j<S.size();j++)
           {
               if(isupper(S[j])) upper++;
               else lower++;
               if(upper==lower) count++;
           }
       }return count;
    }
};
