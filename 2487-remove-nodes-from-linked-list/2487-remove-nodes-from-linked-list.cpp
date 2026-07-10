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
    ListNode* removeNodes(ListNode* head) {
        stack<ListNode*>st;
        ListNode* curr=head;
        vector<ListNode*>newList;
        while(curr){
            while(!st.empty()&&st.top()->val<curr->val){
                st.pop();
            }
            st.push(curr);
            curr=curr->next;
        }
        while(!st.empty()){
            newList.push_back(st.top());
            st.pop();
        }
        if(newList.size()==0)return nullptr;
        else{
            reverse(newList.begin(),newList.end());
            head=nullptr;
            curr=head;
            int i=0;
            while(i<newList.size()){
                curr=newList[i];
                if(!head)head=curr;
                i++;
                if(i<newList.size()){
                curr->next=newList[i];
                curr=curr->next;}
                else curr->next=nullptr;
        }}
        return head;
    }
};