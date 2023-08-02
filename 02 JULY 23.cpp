//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int shortestDistance(int N, int M, vector<vector<int>> A, int X, int Y) {
      if(A[0][0]==0) return -1;
      vector<int> row={0,-1,0,1};
      vector<int> col={-1,0,1,0};
      
      queue<pair<pair<int,int>,int>> q;
      q.push({{0,0},0});
      while(!q.empty())
      {
          int r=q.front().first.first;
          int c=q.front().first.second;
          int dist=q.front().second;
          q.pop();
          if(r==X and c==Y) return dist;
          for(int i=0;i<4;i++)
          {
              int x=r+row[i];
              int y=c+col[i];
              if(x<0 || x>=N || y<0 || y>=M)
               continue;
              if(A[x][y]!=0)
              {
                  A[x][y]=0;
                  q.push({{x,y},dist+1});
              }
              
          }
      }
      return -1;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, M, x, y;
        cin >> N >> M;
        vector<vector<int>> v(N, vector<int>(M));
        for (int i = 0; i < N; i++)
            for (int j = 0; j < M; j++) cin >> v[i][j];
        cin >> x >> y;
        Solution ob;
        cout << ob.shortestDistance(N, M, v, x, y) << "\n";
    }
}
// } Driver Code Ends
