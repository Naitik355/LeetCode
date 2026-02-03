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
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int>preorder;
        if(root==nullptr) return preorder;
        stack<TreeNode*>st;
        st.push(root);
        while(!st.empty()){
            TreeNode* a=st.top();
            st.pop();
            preorder.push_back(a->val);
            if(a->right!=nullptr) st.push(a->right);
            if(a->left!=nullptr) st.push(a->left);
        }
        return preorder;
    }
};
