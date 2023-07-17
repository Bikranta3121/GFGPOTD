string FirstNonRepeating(string A){
            // Code here
            int freq[26]={0};
            queue<char>q;
            string ans="";
            for (int i = 0; i < A.size(); i++) {
                q.push(A[i]);
                freq[A[i]-'a']++;
                
                while(!q.empty()){
                    if(freq[q.front()-'a']==1){
                        ans+=q.front();
                        break;
                    }
                    else
                    q.pop();
                }
                if(q.empty()) ans+='#';
            }
                return ans;
            }
