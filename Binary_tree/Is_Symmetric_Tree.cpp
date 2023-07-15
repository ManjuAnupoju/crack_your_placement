class Solution{
    public: 
    bool check(Node* r1,Node* r2)
    {
        if(r1 && r2)
        {
            if(r1->data==r2->data)
            {
                bool l=check(r1->left,r2->right);
                bool r=check(r1->right,r2->left);
                if(r && l) return true;
                else return false;
            }
            else return false;
        }
        else if(!r1 && !r2) return true;
        else return false;
    }
    // return true/false denoting whether the tree is Symmetric or not
    bool isSymmetric(struct Node* root)
    {
	    // Code here
	  if(root==NULL) return true;
	  Node* r1=root->left;
	  Node*r2=root->right;
	  bool a=check(r1,r2);
	  return a;
    }
};
