//Function to swap Kth node from beginning and end in a linked list.
Node *swapkthnode(Node* head, int n, int k)
{
    // // Your Code here
    // if(K>num)
    //     return head;
        
    // if(K==(2*num-1))
    //     return head;
        
    // Node*temp1 = head, *temp2 = head, *prev1 = NULL, *prev2 = NULL;
    
    // int count1=1,count2=1;
    
    // while(temp1 && count1<=K){
    //     count1++;
    //     prev1 = temp1;
    //     temp1 = temp1->next;
    // }
    
    // while(temp2 && count2<=(num-K)){
    //     count2++;
    //     prev2 = temp2;
    //     temp2 = temp2->next;
    // }
    
    // if(prev1)
    //     prev1->next = temp2;
    // if(prev2)
    //     prev2->next = temp1;
    // Node*x = temp1->next;
    // temp1->next = temp2->next;
    // temp2->next = x;
    
    // if(K==1)
    //     head = temp2;
    // if(K==num)
    //     head = temp1;
    
    // return head;
    
    if (n < k)
        return head;

    if (2 * k - 1 == n)
        return head;
 
    Node* x = head;
    Node* x_prev = NULL;
    for (int i = 1; i < k; i++) {
        x_prev = x;
        x = x->next;
    }

    Node* y = head;
    Node* y_prev = NULL;
    for (int i = 1; i < n - k + 1; i++) {
        y_prev = y;
        y = y->next;
    }

    if (x_prev)
        x_prev->next = y;
 
    if (y_prev)
        y_prev->next = x;
 
    Node* temp = x->next;
    x->next = y->next;
    y->next = temp;
 
    if (k == 1)
        head = y;
    if (k == n)
        head = x;
        
    return head;
}

