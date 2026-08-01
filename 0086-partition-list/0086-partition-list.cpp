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
    ListNode* partition(ListNode* head, int x) {
        queue<int>lesser;
        queue<int>greater;
        ListNode* curr=head;
        ListNode dummy(0);
        while(curr){
            if(curr->val<x)lesser.push(curr->val);
            else greater.push(curr->val);
            curr=curr->next;
        }
        ListNode* prev=&dummy;
        while(!lesser.empty()){
            prev->next=new ListNode(lesser.front());
            prev=prev->next;
            lesser.pop();
        }
        while(!greater.empty()){
            prev->next=new ListNode(greater.front());
            prev=prev->next;
            greater.pop();
        }
        return dummy.next;
    }
};