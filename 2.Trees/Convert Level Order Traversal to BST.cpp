//Function to construct the BST from its given level order traversal.
Node* constructBst(int arr[], int n)
{
    // Code here
    queue<tuple<int,Node*,int>>q;
    Node*root = new Node(arr[0]);
    q.push(make_tuple(INT_MIN,root,INT_MAX));
    int i=1;
    while(i<n){
        int minv = get<0>(q.front());
        Node*midv = get<1>(q.front());
        int maxv = get<2>(q.front());
        q.pop();
        if( arr[i]>minv && arr[i]<midv->data){
            midv->left = new Node(arr[i++]);
            q.push(make_tuple(minv,midv->left,midv->data));
        }
        if(i<n && arr[i]>midv->data && arr[i]<maxv){
            midv->right = new Node(arr[i++]);
            q.push(make_tuple(midv->data,midv->right,maxv));
        }
    }
    return root;
}