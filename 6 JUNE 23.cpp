class Solution
{
    public:
    //Function to find the least absolute difference between any node
	//value of the BST and the given integer.
   int minDiff(Node *root, int k)
    {
      queue<Node*> q;
      q.push(root);
      int min_diff=INT_MAX;
      //int ans;
      while(!q.empty())
      {
         Node *temp=q.front();
         q.pop();
         if(abs(k-temp->data) < min_diff)
         {
             //ans=temp->data;
             min_diff=abs(k-temp->data);
         }
         if(temp->right) q.push(temp->right);
         if(temp->left) q.push(temp->left);
      }
      return min_diff;
    }
};
