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
    ListNode* oddEvenList(ListNode* head) {
        if(head==NULL||head->next==NULL)
            return head;
        ListNode*head1=new ListNode;
        ListNode*temp;
        ListNode*tempp=head1;
        for(temp=head;temp->next!=NULL;temp=temp->next)
        {
            cout<<temp->val;
            ListNode*temp1=temp->next;
            temp->next=temp1->next;
            tempp->next=temp1;

            tempp=tempp->next;
            cout<<tempp->val;
            tempp->next=NULL;
            if(temp->next==NULL)
                break;

        }
        temp->next=head1->next;

        return head;

    }
};
