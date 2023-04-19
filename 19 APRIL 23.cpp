class Solution{
    public:
    // bool check(int x,int i,string S)
    // {
    //     int l=(i>=x)?i-x:0;
    //     int r=(i+x<S.size())?i+x:S.size()-1;
    //     for(int k=l;k<=r;k++)
    //     {
    //         if(S[k]=='1')return false;
    //     }
    //     return true;
    // }
    bool wifiRange(int N, string s, int X){
       for(int i=0; i<N; i++){
            if(s[i] == '1'){
                int k = 1;
                while(i-k >= 0 && k<=X){
                    if(s[i-k] == '0')
                        s[i-k] = '2'; //such that we can differentiate between the real room with wifi
                        // and room with range of wifi with anearby rooms
                    k++;
                }
                k = 1;
                while(i+k < N && k<=X){
                    if(s[i+k] == '0')
                        s[i+k] = '2';
                    k++;
                }
            }
        }
        for(int i=0; i<N; i++){
            if(s[i] == '0'){
                return 0;
            }
        }
        return 1;
    }
};
