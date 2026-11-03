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
 unordered_map<int,vector<TreeNode*>>dp;
    vector<TreeNode*> allPossibleFBT(int n) {
        if(n%2==0){
            return {};
        }
        if(n==1){
            return {new TreeNode(0)};
        }
        if(dp.count(n))return dp[n];
        vector<TreeNode*>ans;
        for(int i=1;i<n;i+=2){
            int left=i;
            int right=n-i-1;
            vector<TreeNode*>leftTree=allPossibleFBT(left);
            vector<TreeNode*>rightTree=allPossibleFBT(right);
            for(auto l:leftTree){
                for(auto r:rightTree){
                    TreeNode*ptr=new TreeNode(0);
                    ptr->left=l;
                    ptr->right=r;
                    ans.push_back(ptr);
                }

            }
        }
        return dp[n]=ans;
    }
};