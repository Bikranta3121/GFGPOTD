class Solution{
public:
    int getNthFromLast(Node *head, int n)
    {
           int res=-1;
           int N=1;
           Node *temp=head;
           Node *ans=NULL;
           while(temp)
           {
             if(N-n==0)
             {
                 ans=head;
                 res=head->data;
             }
             else if(N-n>0)
             {
                 ans=ans->next;
                 res=ans->data;
             }
             temp=temp->next;
             N++;
           }
           return res;
    }
};
