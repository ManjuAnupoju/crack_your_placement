class Solution{
    public:
    //Function to check whether a binary tree is balanced or not.
    int height(Node* root)
    {
        if(root==NULL) return 0;
        int l=height(root->left);
        int r=height(root->right);
        return max(l,r)+1;
    }
    bool isBalanced(Node *root)
    {
        if(root==NULL) return true;
        bool l=isBalanced(root->left);
        bool r=isBalanced(root->right);
        int left=height(root->left);
        int right=height(root->right);
        if((abs(left-right)<=1) && l && r)
        return true;
        else return false;
    }
};
