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
    vector<int>mode(TreeNode*root,vector<int>&res,int &max,int &prev, int &count){
        if(root==NULL)
            return res;
        mode(root->left,res,max,prev,count);
        if(root->val==prev)
            count++;
        else
            count=1;
        if(count>max){
            res.clear();
            res.push_back(root->val);
            max=count;
        }
        else if(count==max)
            res.push_back(root->val);
        prev=root->val;
        mode(root->right,res,max,prev,count);
        return res;
    }
    
    vector<int> findMode(TreeNode* root) {
        int max=0,prev=-1,count=1;
        vector<int>res;
        return mode(root,res,max,prev,count);
    }
};