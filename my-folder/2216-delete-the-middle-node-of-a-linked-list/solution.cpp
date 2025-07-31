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
    ListNode* deleteMiddle(ListNode* head) {
        if(head==nullptr || head->next==nullptr) return nullptr;
        ListNode* temp=head;
        ListNode* temp1=head->next;
        int count=0;
        while(temp!=nullptr){
            temp=temp->next;
            count++;
        }
        int n=count/2;
        ListNode* prev=head;
        for(int i=1;i<n;i++){
            temp1=temp1->next;
            prev=prev->next;
        }
        prev->next=temp1->next;
        delete temp1;
        return head;
    }
};
