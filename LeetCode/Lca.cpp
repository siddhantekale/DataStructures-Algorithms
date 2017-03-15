/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution 
{
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) 
    {
        if(root == p || root == q)
            return root;
            
        if(root == NULL)
            return NULL;
            
        TreeNode *leftFind = lowestCommonAncestor(root -> left, p, q);
        TreeNode *rightFind = lowestCommonAncestor(root -> right, p, q);
        
        return leftFind && rightFind ? root : (leftFind ? leftFind : rightFind);
    }
};