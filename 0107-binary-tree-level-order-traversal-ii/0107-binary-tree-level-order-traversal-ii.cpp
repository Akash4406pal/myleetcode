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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>>ans;
        if(!root)return ans;
        queue<TreeNode*>nodes;
        vector<int>partans;
        nodes.push(root);
        nodes.push(NULL);
        while(!nodes.empty()){
            TreeNode* curr=nodes.front();
            nodes.pop();
            if(!curr){
               if(nodes.size()>0){
                nodes.push(NULL);
               }
               ans.push_back(partans);
               partans.clear();
            }
           else{
                partans.push_back(curr->val);
                if(curr->left)nodes.push(curr->left);
                if(curr->right)nodes.push(curr->right);
           }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};