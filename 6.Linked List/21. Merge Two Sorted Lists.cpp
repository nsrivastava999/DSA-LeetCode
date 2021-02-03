/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode*head=NULL;
        if(l1==NULL && l2==NULL)
            return NULL;
        if(l1==NULL)
            return l2;
        if(l2==NULL)
            return l1;
        ListNode*temp1=l1;
        ListNode*temp2=l2;
        if(temp1->val<=temp2->val){
            head=temp1;
            temp1=temp1->next;
        }
        else{
            head=temp2;
            temp2=temp2->next;
        }
        ListNode*temp=head;
        while(temp1!=NULL && temp2!=NULL){
            if(temp1->val<=temp2->val){
                temp->next=temp1;
                temp=temp->next;
                temp1=temp1->next;
            }
            else{
                temp->next=temp2;
                temp=temp->next;
                temp2=temp2->next;
            }
        }
        while(temp1!=NULL){
            temp->next=temp1;
            temp=temp->next;
            temp1=temp1->next;
        }
        while(temp2!=NULL){
            temp->next=temp2;
            temp=temp->next;
            temp2=temp2->next;
        }
        return head;
    }
};