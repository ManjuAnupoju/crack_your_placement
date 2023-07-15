class Solution
{
    public:
    //Function to check whether a Binary Tree is BST or not.
    int bmax(Node* root)
    {
        if(root==NULL) return INT_MIN;
        while(root->right!=NULL) root=root->right;
        return root->data;
    }
    int bmin(Node *root)
    {
        if(root==NULL) return INT_MAX;
        while(root->left!=NULL) root=root->left;
        return root->data;
    }
    bool isBST(Node* root) 
    {
        // Your code here
        if(root==NULL) return true;
        int  l= bmax(root->left);
        int  r=bmin(root->right);
        if(l >= root->data   || r <= root->data) return false;
        bool a=isBST(root->left);
        bool b=isBST(root->right);
        if(a && b) return true;
        else return false;
        
    } 
};
