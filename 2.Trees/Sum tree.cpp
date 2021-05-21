/*  Tree node
struct Node
{
    int data;
    Node* left, * right;
}; */

// Should return true if tree is Sum Tree, else false
class Solution
{
    public:
    int helper(Node*root,bool &flag){//return the subtree sum value
        if(!root)
            return 0;
        if(!root->left && !root->right)//leaf node
            return root->data;
        int ls = helper(root->left,flag);
        int rs = helper(root->right,flag);
        if((ls+rs)!=root->data)
            flag = false;
        return ls+rs+root->data;
    }
    bool isSumTree(Node* root)
    {
        bool flag = true;
        helper(root,flag);
        return flag;
    }
};