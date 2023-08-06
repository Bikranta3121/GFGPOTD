//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    //Complete this function
    vector<int> vis={0,0,0,0,0};
    void solve(string str,string &S,vector<string> &res)
    {
        if(str.size()>=S.size())
        {
            res.push_back(str);
            return ;
        }
        for(int i=0;i<S.size();i++)
        {
            if(!vis[i])
            {
                vis[i]=1;
                str.push_back(S[i]);
                solve(str,S,res);
                str.pop_back();
                vis[i]=0;
            }
        }
        return;
    }
    vector<string> permutation(string S)
    {
        vector<string> res;
        string str;
        solve(str,S,res);
        sort(res.begin(),res.end());
        return res;
    }
};


//{ Driver Code Starts.

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		string S;
		cin>>S;
		Solution ob;
		vector<string> vec = ob.permutation(S);
		for(string s : vec){
		    cout<<s<<" ";
		}
		cout<<endl;
	
	}
	return 0;
}
// } Driver Code Ends
