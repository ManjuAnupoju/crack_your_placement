class Solution
{
public:
    // Function to check if two treesC:\Users\ANUPOJU MANJU\OneDrive\Desktop\BINARYTREE\Check_for_balanced_tree.cpp are identical.

    bool isIdentical(Node *r1, Node *r2)
    {
        // Your Code here
        if (r1 == NULL && r2 == NULL)
            return true;
        if (r1 != NULL && r2 == NULL)
            return false;
        if (r1 == NULL && r2 != NULL)
            return false;
        bool left = isIdentical(r1->left, r2->left);
        bool right = isIdentical(r1->right, r2->right);
        bool temp = false;
        if (r1->data == r2->data)
            temp = true;
        if (left && right && temp)
            return true;
        else
            return false;
    }
};
