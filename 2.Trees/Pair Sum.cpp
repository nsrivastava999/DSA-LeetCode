//Function to check if any pair exists in BST whose sum is equal to given value.
bool helper(Node*root,unordered_set<int>&s,int x){
    if(!root)
        return false;
    bool c1 = helper(root->left,s,x);\
    
    bool c2 = (s.find(x-(root->data))!=s.end());
    s.insert(root->data);
    
    bool c3 = helper(root->right,s,x);
    
    return c1 || c2 || c3;
}

bool findPair(Node* root, int X) 
{
    // Your code here
    unordered_set<int>s;
    return helper(root,s,X);
}