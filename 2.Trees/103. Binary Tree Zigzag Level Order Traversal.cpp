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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        stack <TreeNode* > s;
        s.push(root);
        TreeNode *temp=root;
        bool rev=false;
        vector<vector<int>>ans;
        while(!s.empty() && temp)
        {
        vector<int> v;
        vector <TreeNode*> t;
        
        while(!s.empty())
        {
            temp=s.top();
            s.pop();
            if(rev)
            {
                //temp=q.back();
                if(temp->right)
                {
                    t.push_back(temp->right);
                }
                if(temp->left)
                    t.push_back(temp->left);
            }
            else
            {
                if(temp->left)
                    t.push_back(temp->left);
                 if(temp->right)
                     t.push_back(temp->right);
            
            }
            v.push_back(temp->val);
            
            
        }
        rev=!rev;
        ans.push_back(v);
        for(TreeNode* x : t)
        {
            s.push(x);
        }
        
    }
    return ans;
    }
};