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
    int preIndex=0;
    TreeNode* build(vector<int>& preorder, vector<int>& inorder,int is,int ie){
        int n=preorder.size();
        if(is>ie)
            return NULL;
        TreeNode*root = new TreeNode(preorder[preIndex++]);
        int inIndex;
        for(int i=is;i<=ie;i++){
            if(root->val==inorder[i]){
                inIndex=i;
                break;
            }
        }
        root->left = build(preorder,inorder,is,inIndex-1);
        root->right = build(preorder,inorder,inIndex+1,ie);
        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        return build(preorder,inorder,0,preorder.size()-1);
    }
};