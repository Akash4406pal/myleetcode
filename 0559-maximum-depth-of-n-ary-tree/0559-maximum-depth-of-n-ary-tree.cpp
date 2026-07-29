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
    int maxDepth(Node* root) {
        if(!root)return 0;
        int ans=1;
        queue<pair<Node*,int>>bfs;
        bfs.push({root,1});
        while(!bfs.empty()){
            Node* curr=bfs.front().first;
            int deapth=bfs.front().second;
            ans=max(ans,deapth);
            bfs.pop();
            for(auto x:curr->children){
                bfs.push({x,deapth+1});
            }
        }
        return ans;
    }
};