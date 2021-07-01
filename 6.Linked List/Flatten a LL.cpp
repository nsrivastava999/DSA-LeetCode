/* Node structure  used in the program

struct Node{
	int data;
	struct Node * next;
	struct Node * bottom;
	
	Node(int x){
	    data = x;
	    next = NULL;
	    bottom = NULL;
	}
	
};
*/

Node*merge(Node*a,Node*b){
    Node*dummy = new Node(-9998);
    Node*curr = dummy;
    while(a && b){
        if(a->data<=b->data){
            curr->bottom = a;
            a = a->bottom;
            curr = curr->bottom;
        }
        else{
            curr->bottom = b;
            b = b->bottom;
            curr = curr->bottom;
        }
    }
    if(!a){
        curr->bottom = b;
    }
    else
        curr->bottom = a;
        
    return dummy->bottom;
}

/*  Function which returns the  root of 
    the flattened linked list. */
Node *flatten(Node *root)
{
    // Your code here
    if(!root || !root->next){
        return root;
    }
    root->next = flatten(root->next);
    root = merge(root,root->next);
    return root;
}
