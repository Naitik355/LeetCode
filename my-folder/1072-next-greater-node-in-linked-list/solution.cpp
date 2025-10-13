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
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int> v;
        ListNode* temp = head;
        while (temp) {
        ListNode* next1 = temp->next;
        int ele=0;
            while (next1) {
                if (next1->val>temp->val) {
                    ele=next1->val;
                    break;
                }
                next1 = next1->next;
            }
            v.push_back(ele);
            temp = temp->next;

        }
        return v;
    }
};
