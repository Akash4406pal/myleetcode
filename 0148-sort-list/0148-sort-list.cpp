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
    ListNode* sortList(ListNode* head) {
     priority_queue<int,vector<int>,greater<int>>pq;
     ListNode* curr=head;
     while(curr){
        pq.push(curr->val);
        curr=curr->next;
     }
     ListNode dummy(0);
     ListNode* prev=&dummy;
     while(!pq.empty()){
        ListNode* curr=new ListNode(pq.top());
        pq.pop();
        prev->next=curr;
        prev=curr;
     }
     return dummy.next;
    }
};