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
    vector<double> averageOfLevels(TreeNode* root) {
           vector<double> avg;
        if (root == nullptr) return avg;

        queue<TreeNode*> q;
        q.push(root);

        while (!q.empty()) {
            int size = q.size();
            double sum=0;
            int count=0;
            for (int i = 0; i < size; ++i) {
                TreeNode* current = q.front();
                q.pop();
                sum+=current->val;
                count++;

                if (current->left != nullptr){
                 q.push(current->left);
                }
                if (current->right != nullptr){
                     q.push(current->right);
                } 
            }

            avg.push_back(sum/double(count));
        }

        return avg;
    }
};