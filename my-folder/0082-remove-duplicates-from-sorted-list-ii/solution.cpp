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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==nullptr || head->next==nullptr) return head;
        ListNode* temp=head;
        ListNode* prev=nullptr;
        while(temp!=nullptr && temp->next!=nullptr){
            if(temp->val!=temp->next->val){
                prev=temp;
                temp=temp->next;

            }
            else{
                int val=temp->val;
                while(temp!=nullptr && temp->val==val){
                    ListNode* dummy=temp;
                    temp=temp->next;
                    delete dummy;
                }
                if(prev!=nullptr){
                    prev->next=temp;
                }
                else{
                    head=temp;
                }
            }
        }
        return head;
    }
};
