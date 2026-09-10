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
    pair<int,int> helper(TreeNode* root,int& ans){
        int sum=0,nodes=0;
        if(!root){
            return{sum,nodes};
        }
        auto r=helper(root->right,ans);
        auto l=helper(root->left,ans);
        sum+=(r.first+root->val+l.first);
        nodes+=(r.second+l.second+1);
        if(sum/nodes==root->val)ans++;
        return {sum,nodes};
    }
    int averageOfSubtree(TreeNode* root) {
        int ans=0;
        helper(root,ans);
        return ans;
    }
};