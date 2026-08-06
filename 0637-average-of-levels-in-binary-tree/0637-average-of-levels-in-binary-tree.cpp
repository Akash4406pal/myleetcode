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
        double sum=0;
        double nodes=0;
        vector<double>ans;
        queue<TreeNode*>qu;
        qu.push(root);
        qu.push(nullptr);
        while(!qu.empty()){
            TreeNode* curr=qu.front();
            qu.pop();
            if(!curr){
                if(!qu.empty())qu.push(nullptr);
               double avg=sum/nodes;
               ans.push_back(avg);
               sum=0;nodes=0;
            }
            else{
                sum+=curr->val;
                nodes++;
                if(curr->right)qu.push(curr->right);
                if(curr->left)qu.push(curr->left);
            }
        }
        return ans;
    }
};