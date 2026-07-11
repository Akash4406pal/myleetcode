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
    void reorderList(ListNode* head) {
        ListNode dummy(10);
        ListNode* slow=head;
        ListNode* fast=head;
        queue<ListNode*>qu;
        stack<ListNode*>st;
        ListNode* prev=&dummy;
        while(fast&&fast->next){
            qu.push(slow);
            slow=slow->next;
            fast=fast->next->next;
        }
        while(slow){
            st.push(slow);
            slow=slow->next;}
        int num=1;
        while(!qu.empty()&&!st.empty()){
            if(num==1){
                prev->next=qu.front();
                qu.pop();
                prev=prev->next;
                num=2;
            }
            else{
                prev->next=st.top();
                st.pop();
                prev=prev->next;
                num=1;
            }
        }
        while (!st.empty()) {
            prev->next = st.top();
            st.pop();
            prev = prev->next;
        }
        while (!qu.empty()) {
            prev->next = qu.front();
            qu.pop();
            prev = prev->next;
        }
        prev->next=nullptr;
    }
};