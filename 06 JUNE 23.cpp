class Solution
{
    public:
    void findPreSuc(Node* root, Node*& pre, Node*& suc, int key)
    {
        // Your code goes here
pre=suc=NULL;
        while(root && root->key!=key){
            if(root->key>key){
                suc=root;
                root=root->left;
            }
            else{
                pre=root;
                root=root->right;
            }
        }
        if(root){
           Node* temp=root->right;
            while(temp){suc=temp;temp=temp->left;}
            
           root=root->left;
            while(root){pre=root;root=root->right;}}
        
        // Your code goes here
    }
};
