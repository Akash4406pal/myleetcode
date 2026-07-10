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
        ListNode dummy(0);
        ListNode* curr=head;
        ListNode* prev=&dummy;
        while(curr){
            if(st.contains(curr->val)){
                prev->next=curr->next;
                curr=curr->next;
            }
            else {
                prev->next=curr;
                prev=curr;
                curr=curr->next;
            }
        }
        return dummy.next;
    }
};