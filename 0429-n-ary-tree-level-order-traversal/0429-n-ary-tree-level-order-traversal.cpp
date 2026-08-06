/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>>ans;
        if(!root)return ans;
        queue<Node*>qu;
        qu.push(root);
        qu.push(nullptr);
        vector<int>level;
        while(!qu.empty()){
            Node* curr=qu.front();
            qu.pop();
            if(!curr){
                if(!qu.empty())qu.push(nullptr);
                ans.push_back(level);
                level.clear();
            }
            else{
                level.push_back(curr->val);
                for(auto x:curr->children){
                    qu.push(x);
                }
            }
        }
        return ans;
    }
};