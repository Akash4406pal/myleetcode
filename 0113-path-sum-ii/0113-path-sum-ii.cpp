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
    void helper(TreeNode* root, int targetSum,vector<vector<int>>&ans,vector<int>&curr_path){
        if(!root)return;
        curr_path.push_back(root->val);
        if(!root->right && !root->left){
            if(targetSum==root->val)ans.push_back(curr_path);
        }
        if(root->left)helper(root->left,targetSum-root->val,ans,curr_path);
        if(root->right)helper(root->right,targetSum-root->val,ans,curr_path);
        curr_path.pop_back();
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>>ans;
        vector<int>curr_path;
        helper(root,targetSum,ans,curr_path);
        return ans;
    }
};