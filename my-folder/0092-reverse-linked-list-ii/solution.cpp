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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(head==nullptr||head->next==nullptr)return head;
        ListNode* leftTemp=head;
        ListNode* rightTemp=head;
        for(int leftCount=1;leftCount<left-1;leftCount++){
            leftTemp=leftTemp->next;
        }
        for(int rightCount=1;rightCount<right;rightCount++){
            rightTemp=rightTemp->next;
        }
        ListNode* prev=nullptr;
        ListNode* curr;
        if(left==1){
            curr=head;
        }
        else curr=leftTemp->next;
        ListNode* first=curr;
        ListNode* after = rightTemp->next;
        for(int i=0;i<=right-left;i++){
            ListNode* next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        first->next=after;
        if(left==1){
            head=prev;
        }
        else leftTemp->next=prev;

        return head;
    }
};
