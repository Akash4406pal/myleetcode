/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
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
    TreeNode* buildBST(int left,int right,vector<int>&v){
        if(left>right)return nullptr;
        int mid=left+(right-left)/2;
        TreeNode*root=new TreeNode(v[mid]);
        root->left= buildBST(left,mid-1,v);
        root->right= buildBST(mid+1,right,v);
        return root;
    }
    TreeNode* sortedListToBST(ListNode* head) {
        ListNode* curr=head;
        vector<int>node_val;
        while(curr){
            node_val.push_back(curr->val);
            curr=curr->next;
        }
        int left=0,right=node_val.size()-1;
        return buildBST(left,right,node_val);
    }
};