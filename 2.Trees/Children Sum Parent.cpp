/*
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};
*/

//Function to check whether all nodes of a tree have the value 
//equal to the sum of their child nodes.
int isSumProperty(Node *root)
{
    if(!root || (!root->left && !root->right))
        return 1;
    // return root->data=(root->left->data)+(root->right->data) && isSumProperty(root->left) && isSumProperty(root->right);
    int sum = 0;
    if(root->left)
        sum+=root->left->data;
    if(root->right)
        sum+=root->right->data;
    return (sum==root->data && isSumProperty(root->left)==1 && isSumProperty(root->right)==1)?1:0;
    
}