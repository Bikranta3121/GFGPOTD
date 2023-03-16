long long int no_of_subarrays(int n, vector<int> &arr) {long long int count=0;long long int sum=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i])
        {
            count=(count*(count+1))/2;
            sum+=count;
            count=0;
        }
        else count++;
    }
    count=(count*(count+1))/2;
    sum+=count;
    return sum;
    
}
