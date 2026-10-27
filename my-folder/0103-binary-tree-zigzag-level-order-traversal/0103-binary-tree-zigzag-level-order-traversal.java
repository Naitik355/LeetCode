/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    public List<List<Integer>> zigzagLevelOrder(TreeNode root) {
        List<List<Integer>> result=new ArrayList<>();
        if(root==null) return result;
        Queue<TreeNode>q=new LinkedList<>();
        boolean flag=true;
        q.add(root);
        while(!q.isEmpty()){
            int size=q.size();
            int[] level=new int [size];
            for(int i=0;i<size;i++){
                TreeNode node=q.peek();
                q.remove();
                int index=flag?i:(size-i-1);
                level[index]=node.val;


                if(node.left!=null) q.add(node.left);
                if(node.right!=null) q.add(node.right);
            }
            flag=!flag;
            List<Integer>currentLevel=new ArrayList<>();
            for(int val:level){
                currentLevel.add(val);
            }
            result.add(currentLevel);
        }
        return result;
    }
}