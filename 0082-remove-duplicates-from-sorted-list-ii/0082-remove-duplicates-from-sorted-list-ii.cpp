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
    ListNode* deleteDuplicates(ListNode* head) {
        if(!head)return head;
        ListNode* curr=head->next;
        ListNode* prev=head;
        ListNode dummy(0);
        unordered_set<int>st;
        while(curr){
            if(curr->val==prev->val){
                st.insert(curr->val);
            }
            else{
                prev=curr;
            }
            curr=curr->next;
        }
        prev=&dummy;
        curr=head;
        while(curr){
            if(st.contains(curr->val))prev->next=curr->next;
            else {
            prev->next=curr;
            prev=curr;}
            curr=curr->next;
        }
        return dummy.next;
    }
};