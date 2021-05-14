Node*helper(int pre[],int size, int max, int min,int &preIndex){
    if(preIndex>=size || min>max)
        return NULL;
    
    int temp = pre[preIndex];
    
    if(temp<min || temp>max)
        return NULL;
        
    preIndex++;
    Node*root = newNode(temp);
    root->left = helper(pre,size,temp,min,preIndex);
    root->right = helper(pre,size,max,temp,preIndex);
    return root;
}

Node* constructTree(int pre[], int size)
{
    int preIndex = 0;
    Node*root = helper(pre,size,INT_MAX,INT_MIN,preIndex);
    return root;
}