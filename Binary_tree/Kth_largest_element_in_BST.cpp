class Solution
{
    public:
    void inorder(Node* root,vector<int> &v)
    {
        if(root==NULL) return ;
        inorder(root->left,v);
        if(root)
        {
            v.push_back(root->data);
        }
        inorder(root->right,v);
    }
    int kthLargest(Node *root, int K)
    {
        //Your code here
        vector <int> v;
        inorder(root,v);
        int i;
        vector <int>::iterator ele=v.end()-K;
        i=*ele;
        return i;
    }
};
