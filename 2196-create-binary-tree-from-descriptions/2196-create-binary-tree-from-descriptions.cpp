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
    TreeNode* createBinaryTree(vector<vector<int>>& descriptions) {
        unordered_map<int,TreeNode*>info;
        unordered_set<int>hasParent;
        for(int i=0;i<descriptions.size();i++){
            hasParent.insert(descriptions[i][1]);
            if(info.find(descriptions[i][0])==info.end()){
                info[descriptions[i][0]]=new TreeNode(descriptions[i][0]);
            }
             if(info.find(descriptions[i][1])==info.end()){
                info[descriptions[i][1]]=new TreeNode(descriptions[i][1]);}
            if(descriptions[i][2]==1){
                info[descriptions[i][0]]->left=info[descriptions[i][1]];
            }
            else{
                info[descriptions[i][0]]->right=info[descriptions[i][1]];
            }
        }
        for(auto& pair:info){
            if(!hasParent.count(pair.first))return pair.second;
        }
        return nullptr;
    }
};