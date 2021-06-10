struct cmp{
    bool operator()(Node*n1,Node*n2){
        return n1->data>n2->data;
    }
};

class Solution{
  public:
    //Function to merge K sorted linked list.
    Node * mergeKLists(Node *arr[], int k)
    {
        // Your code here
        priority_queue<Node*,vector<Node*>,cmp>pq;
        for(int i=0;i<k;i++){
            if(arr[i])
                pq.push(arr[i]);
        }
        
        Node*dummy = new Node(-9999);
        Node*tail = dummy;
        while(!pq.empty()){
            Node*temp = pq.top();
            pq.pop();
            if(temp->next)
                pq.push(temp->next);
            tail->next = temp;
            tail = tail->next;
            
            
        }
        return dummy->next;
    }
};