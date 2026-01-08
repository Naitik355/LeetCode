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
        if(head==nullptr) return nullptr;
        ListNode* temp=head;
        int pos=1;
        ListNode* eh=nullptr;
        ListNode* oh=nullptr;
        ListNode* et=eh;
        ListNode* ot=oh;
        while(temp){
            ListNode* next=temp->next;
            temp->next=nullptr;
            if(pos%2==0){
                if(eh==nullptr){
                    eh=temp;
                    et=temp;
                }
                else{
                    et->next=temp;
                    et=temp;
                }
            }
            else{
                if(oh==nullptr){
                    oh=temp;
                    ot=temp;
                }
                else{
                    ot->next=temp;
                    ot=temp;
                }
            }
            pos++;
            temp=next;
        }
        ot->next=eh;
        return oh;
    }
};
