class Solution
{
    public:
    void insertNodes(Node*root,stack<Node*>&s){
        if(root==NULL)
            return;
        while(root){
            s.push(root);
            root=root->left;
        }
    }
    
    //Function to return a list of integers denoting the node 
    //values of both the BST in a sorted order.
    vector<int> merge(Node *root1, Node *root2)
    {
        stack<Node*>s1,s2;
        vector<int>res;
        insertNodes(root1,s1);
        insertNodes(root2,s2);
        
        while(!s1.empty() || !s2.empty()){
            int a=INT_MAX,b=INT_MAX;
            if(!s1.empty())
                a = s1.top()->data;
            if(!s2.empty())
                b = s2.top()->data;
                
            if(a<=b){
                res.push_back(a);
                Node*curr = s1.top();
                s1.pop();
                insertNodes(curr->right,s1);
            }    
            else{
                res.push_back(b);
                Node*curr = s2.top();
                s2.pop();
                insertNodes(curr->right,s2);
            }
            
        }
        return res;
    }
};