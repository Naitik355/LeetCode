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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<int,vector<int>,greater<int>>pq;
        for(ListNode* head:lists){
            ListNode* temp=head;
            while(temp){
                pq.push(temp->val);
                temp=temp->next;
            }
        }
        ListNode* dummy=new ListNode(0);
        ListNode* temp1=dummy;
        while(!pq.empty()){
            temp1->next=new ListNode(pq.top());
            pq.pop();
            temp1=temp1->next;
        }
        return dummy->next;
    }
};