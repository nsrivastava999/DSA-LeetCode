int intersectPoint(Node* head1, Node* head2)
{
    Node*temp1=head1;
    Node*temp2=head2;
    int c1=0,c2=0;
    while(temp1!=NULL){
        c1++;
        temp1=temp1->next;
    }
    while(temp2!=NULL){
        c2++;
        temp2=temp2->next;
    }
    temp1=head1;
    temp2=head2;
    if(c1>c2){
        for(int i=0;i<abs(c1-c2);i++){
            temp1=temp1->next;
        }
    }
    else{
        for(int i=0;i<abs(c1-c2);i++){
            temp2=temp2->next;
        }
    }
    while(temp1!=NULL && temp2!=NULL){
        if(temp1==temp2)
            return temp1->data;
        temp1=temp1->next;
        temp2=temp2->next;
    }
    
    return -1;
}