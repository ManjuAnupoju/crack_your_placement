void rec(vector <int> &v,int level,Node* root)
{
    if(root==NULL) return ;
    if(v.size()==level) v.push_back(root->data);
    if(root->left) rec(v,level+1,root->left);
    if(root->right) rec(v,level+1,root->right);
}
vector<int> leftView(Node *root)
{
    vector <int> v;
    rec(v,0,root);
    return v;
}
