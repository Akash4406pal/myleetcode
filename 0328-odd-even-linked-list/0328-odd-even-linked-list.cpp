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
    ListNode* oddEvenList(ListNode* head) {
        queue<ListNode*>odd;
        queue<ListNode*>even;
        ListNode* curr=head;
        ListNode dummy(0);
        ListNode* prev=&dummy;
        int idx=1;
        while(curr){
            if(idx%2)odd.push(curr);
            else even.push(curr);
            idx++;
            curr=curr->next;
        }
        while(!odd.empty()){
            curr=odd.front();
            odd.pop();
            prev->next=curr;
            prev=curr;
        }
        while(!even.empty()){
            curr=even.front();
            even.pop();
            prev->next=curr;
            prev=curr;
        }
        prev->next=nullptr;
        return dummy.next;
    }
};