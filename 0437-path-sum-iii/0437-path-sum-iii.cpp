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
    void helper(TreeNode* root, int targetSum,long long &sum,unordered_map<long long,int>&mpp,int &ans){
        if(!root)return;
        sum+=root->val;
        ans+=mpp[sum-targetSum];
        mpp[sum]++;
        helper(root->left,targetSum,sum,mpp,ans);
        helper(root->right,targetSum,sum,mpp,ans);
        mpp[sum]--;
        sum-=root->val;   
    }
    int pathSum(TreeNode* root, int targetSum) {
        int ans=0;
        long long sum=0;
        unordered_map<long long,int>mpp;
        mpp[0]=1;
        helper(root,targetSum,sum,mpp,ans);
        return ans;
    }
};