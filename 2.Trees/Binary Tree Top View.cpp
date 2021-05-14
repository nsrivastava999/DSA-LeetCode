class Solution
{
    public:
    //Function to return a list of nodes visible from the top view 
    //from left to right in Binary Tree.
    vector<int> topView(Node *root)
    {
        queue<pair<Node*,int>>q;
        vector<int>res;
        q.push({root,0});
        map<int,int>mp;
        while(!q.empty()){
            auto curr = q.front();
            q.pop();
            int hd = curr.second;
            Node*key = curr.first;
            if(mp.find(hd)==mp.end())
                mp[hd] = key->data;
            if(key->left)
                q.push({key->left,hd-1});
            if(key->right)
                q.push({key->right,hd+1});
        }
        for(auto x:mp){
            res.push_back(x.second);
        }
        return res;
    }

};