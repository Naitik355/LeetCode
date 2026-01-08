/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void ok(TreeNode* root,int& count,int& max1){
        count++;
        if(!root){
            count--;
            return;
        }
        max1=max(max1,count);
        ok(root->left,count,max1);
        ok(root->right,count,max1);
        count--;
    }
    int maxDepth(TreeNode* root) {
        int count=0;
        int max1=0;
        ok(root,count,max1);
        return max1;
    }
};
