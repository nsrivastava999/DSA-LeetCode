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
    // bool helper(TreeNode*h1,TreeNode*h2){
    //     if(h1==NULL && h2==NULL)
    //         return true;
    //     if(h1==NULL || h2==NULL)
    //         return false;
    //     return (h1->val==h2->val) && helper(h1->left,h2->right) && helper(h1->right,h2->left);
    // }
    // bool isSymmetric(TreeNode* root) {
    //     return helper(root,root);
    // }
    bool isSymmetric(TreeNode* root){
        if(root==NULL)
            return true;
        queue<TreeNode*>q1,q2;
        q1.push(root->left);
        q2.push(root->right);
        while(!q1.empty() && !q2.empty()){
            TreeNode*curr1=q1.front();
            q1.pop();
            TreeNode*curr2=q2.front();
            q2.pop();
            if(curr1==NULL && curr2==NULL)
                continue;
            if(curr1==NULL || curr2==NULL)
                return false;
            if(curr1->val!=curr2->val)
                return false;
            q1.push(curr1->left);
            q2.push(curr2->right);
            q1.push(curr1->right);
            q2.push(curr2->left);
        }
        return true;
    }
};