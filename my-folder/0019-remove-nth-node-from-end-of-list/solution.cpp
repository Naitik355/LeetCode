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

    ListNode* reverse(ListNode* head){
        ListNode* prev=nullptr;
        ListNode* curr=head;
        while(curr){
            ListNode* next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next; 
        }
        return prev;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==nullptr) return head;
        head=reverse(head);
        ListNode* curr=head;
        ListNode* prev=nullptr;
        int count=1;
        if(n==1){
            ListNode* temp=head;
            head=head->next;
            temp->next=nullptr;
            delete temp;
            return reverse(head);
        }
        while(curr){
            if(count==n){
                ListNode* temp=curr;
                prev->next=curr->next;
                curr=curr->next;
                temp->next=nullptr;
                delete temp;
                break;
            }
            prev=curr;
            curr=curr->next;
            count++;
        }
        return reverse(head);
    }
};
