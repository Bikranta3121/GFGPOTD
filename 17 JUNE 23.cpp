 public:
    // Function to insert element into the queue
    map<int,int> m;
    void insert(queue<int> &q, int k){
        m[k]++;
        q.push(k);
    }
    
    // Function to find frequency of an element
    // return the frequency of k
    int findFrequency(queue<int> &q, int k){
        if(m.find(k)!=m.end()) return m[k];
        return -1;
    }
};
