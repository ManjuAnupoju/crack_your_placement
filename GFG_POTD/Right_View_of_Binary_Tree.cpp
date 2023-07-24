class Solution
{
    public:
    //Function to return list containing elements of right view of binary tree.
    vector<int> rightView(Node *root)
    {
       // Your Code here
       vector <int> ans;
       right(root,1,ans);
       return ans;
       
    }
    private:
        int maxlevel=0;
     void right(Node *root,int level,vector <int> &ans){
         if(root==NULL) return ;
         if(maxlevel<level) {
             ans.push_back(root->data);
             maxlevel=level;
         }
         if(root->right) right(root->right,level+1,ans);
         if(root->left)  right(root->left,level+1,ans);
     }
};
