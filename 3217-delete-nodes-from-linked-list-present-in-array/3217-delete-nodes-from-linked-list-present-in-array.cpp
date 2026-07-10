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
class Solution {
public:
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        unordered_set<int>st;
        for(int num:nums)st.insert(num);
        ListNode* curr=head;
        ListNode* prev=nullptr;
        while(curr){
            if(st.contains(curr->val)){
                if(prev)prev->next=curr->next;
                curr=curr->next;
            }
            else {
                if(!prev)head=curr;
                prev=curr;
                curr=curr->next;
            }
        }
        return head;
    }
};