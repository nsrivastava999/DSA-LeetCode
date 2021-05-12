Node* findIntersection(Node* head1, Node* head2)
{
    if(!head1 || !head2)
        return NULL;
    
    Node*head = NULL,*temp1 = head1,*temp2 = head2,*temp = NULL;
    
    while(temp1 && temp2){
        if(temp1->data==temp2->data){
            if(head == NULL){
                head = new Node(temp1->data);
                temp = head;
            }
            else{
                Node*x = new Node(temp1->data);
                temp->next = x;
                temp = temp->next;
            }
            temp1=temp1->next;
            temp2=temp2->next;
        }
        else if(temp1->data<temp2->data){
            temp1 = temp1->next;
        }
        else{
            temp2 = temp2->next;
        }
    }
    return head;
}