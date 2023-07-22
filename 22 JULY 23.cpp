class Solution
{
    public:
    //Function to remove duplicates from unsorted linked list.
    Node * removeDuplicates( Node *head) 
    {
     unordered_set<int>  st;
     Node *temp=head;
     st.insert(head->data);
     while(head->next!=NULL)
     {
         if(st.find(head->next->data)==st.end())
         {
             st.insert(head->next->data);
             head=head->next;
         }   
         else
         {
               head->next=head->next->next;
            
         }
         
         
     }
     head=temp;
     return head;
     
    }
};
