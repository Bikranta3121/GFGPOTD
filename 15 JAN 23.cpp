//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
#pragma GCC optimize("O3,unroll-loops")

#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")

#include<ext/pb_ds/tree_policy.hpp>

#include<ext/pb_ds/assoc_container.hpp>

using namespace __gnu_pbds;

#define ordered_set tree<int,null_type,less_equal<int>,rb_tree_tag,tree_order_statistics_node_update>

class Solution{

public:

  long long countSubstring(string s){

      int n=s.size();

      ordered_set seone;

      ordered_set sezer;

      vector<int> vec;

      int c=0;

      for(int i=0;i<n;i++){

          if (s[i]=='0') c-=1;

          else c+=1;

          vec.push_back(c);

      }

      long long ans=0;

      for(int i=0;i<n;i++){

          if (s[i]=='1') seone.insert(vec[i]);

          else sezer.insert(vec[i]);

          ans+=seone.order_of_key(vec[i]+1);

          ans+=sezer.order_of_key(vec[i]-1);

      }

      return ans;

  }};

//{ Driver Code Starts.
int main() {
 ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL); 
 int t=1;
 cin>>t;
 for(int i=1;i<=t;i++){
    string S;
    cin>>S;
    Solution obj;
    long long ans =obj.countSubstring(S);
    cout<<ans<<endl;
 }
}
// } Driver Code Ends
