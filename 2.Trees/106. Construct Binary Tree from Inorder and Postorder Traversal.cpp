/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int postIndex;
    TreeNode*build(vector<int>& inorder, vector<int>& postorder,int is,int ie){
        if(is>ie)
            return NULL;
        TreeNode*root=new TreeNode(postorder[postIndex--]);
        int inIndex;
        for(int i=is;i<=ie;i++){
            if(inorder[i]==root->val){
                inIndex=i;
                break;
            }
        }
        root->right=build(inorder,postorder,inIndex+1,ie);
        root->left=build(inorder,postorder,is,inIndex-1);
        return root;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int n=postorder.size();
        postIndex=n-1;
        return build(inorder,postorder,0,n-1);
    }
};