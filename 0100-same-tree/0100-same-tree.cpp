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
    bool same=true;
    void inorder(TreeNode*p,TreeNode*q){
        if(!p && !q)return;
        if(!p || !q){same=false; return;}
        inorder(p->left,q->left);
        if(p->val!=q->val)same=false;
        inorder(p->right,q->right);
    }
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        inorder(p,q);
        return same;
    }
};