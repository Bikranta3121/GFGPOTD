//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
    int maxIndexDiff(int arr[], int n) {
        vector<int> maxy(n),miny(n);
        miny[0]=arr[0];
        maxy[n-1]=arr[n-1];
        for(int i=1;i<n;++i)
        {
            miny[i]=min(arr[i],miny[i-1]);
            maxy[n-1-i]=max(arr[n-1-i],maxy[n-i]);
        }
        int md=0;
        int i=0,j=n-1;
        int cur=miny[i];
        while(miny[i]>maxy[j])--j;
        md=j-i;
        while(i<n&&j<n)
        {
            while(i<n&&miny[i]==cur)++i;
            if(i==n)break;
            cur=miny[i];
            while(j<n&&miny[i]<=maxy[j])++j;
            --j;
            md=max(md,j-i);
            if(j==n-1)break;
        }
        return md;
        
    }

};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.maxIndexDiff(a, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends
