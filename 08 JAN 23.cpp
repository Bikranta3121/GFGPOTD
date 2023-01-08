//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    long long countPairs(int n, int arr[], int k) {
       vector<int> v(k,0);
       for(int i=0;i<n;i++)
       {
           v[arr[i]%k]+=1;
       }
       long long int sum=0;
       for(int i=0;i<k;i++)
       {
        long long int x=v[i];
        sum+=(x*(x-1))/2;
       }
       return sum;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,k;
        cin>>n;
        
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        
        cin>>k;

        Solution ob;
        cout << ob.countPairs(n,arr,k) << endl;
    }
    return 0;
}
// } Driver Code Ends
