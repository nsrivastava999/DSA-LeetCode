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
    int sumNumbers(TreeNode* root) {
        vector<string>res;
        string s="";
        findNum(root,res,s);
        int sum=0;
        for(int i=0;i<res.size();i++){
            sum+=stoi(res[i]);
        }
        return sum;
    }
    void findNum(TreeNode*root,vector<string>&res,string &s){
        if(!root)
            return;
        s+=to_string(root->val);
        if(!root->left && !root->right)
            res.push_back(s);
        findNum(root->left,res,s);
        findNum(root->right,res,s);
        s.pop_back();
    }
};