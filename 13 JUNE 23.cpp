class Solution{
public:	
	vector<int> kLargest(int arr[], int n, int k) {
	    sort(arr,arr+n);
	    int i=n-1;
	    vector<int> ans;
	    while(k--)
	    {
	        ans.push_back(arr[i]);
	        i--;
	    }
	    return ans;
	}

};
