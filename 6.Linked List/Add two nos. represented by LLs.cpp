class Solution
{
    public:
    //Function to add two numbers represented by linked list.
    Node*reverseList(Node*head){
        Node*prev=NULL,*curr=head,*nxt;
        while(curr){
            nxt=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nxt;
        }
        return prev;
    }
    
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        // code here
        first = reverseList(first);
        second = reverseList(second);
        int c=0,s=0;
        Node*temp,*curr=NULL,*res=NULL;
        while(first || second){
            s=c+(first?first->data:0)+(second?second->data:0);
            c=(s/10);
            s%=10;
            temp=new Node(s);
            if(res==NULL)
                res=temp;
            else
                curr->next=temp;
            curr=temp;
            if(first)
                first=first->next;
            if(second)
                second=second->next;
        }
        if(c>0){
            curr->next=new Node(c);
            // curr=temp;
        }
        res = reverseList(res);
        return res;
    }
};