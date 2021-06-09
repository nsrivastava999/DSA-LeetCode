class Solution
{
    public:
    void rearrangeEvenOdd(Node *head)
    {
       // Your Code here
        Node*odd = head, *even = head->next, *evenFirst = head->next;
        
        while(odd && even){
            if(!even->next)
                break;
            odd->next = even->next;
            odd = even->next;
            
            if(!odd->next){
                even->next=NULL;
                break;
            }
                
            even->next = odd->next;
            even = odd->next;
            
        }
        odd->next = evenFirst;
        
    }
};