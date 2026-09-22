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
    TreeNode*merge(TreeNode*r1,TreeNode*r2){
        if(!r1)return r2;
        if(!r2)return r1;
        r2->val+=r1->val;
        r2->left=merge(r1->left,r2->left);
        r2->right=merge(r1->right,r2->right);
        return r2;
    }
public:
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
        return merge(root1,root2);
    }
};