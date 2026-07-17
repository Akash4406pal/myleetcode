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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        vector<ListNode*>ans(k,nullptr);
        int nodes=0,extra,avg;
        ListNode* curr=head;
        ListNode*prev=nullptr;
        while(curr){
            curr=curr->next;
            nodes++;
        }
        avg=nodes/k;
        extra=nodes%k;
        curr=head;
        int i=0;
        for(int i=0;i<k;i++){
            ans[i]=curr;
            int rem_nodes=avg+(extra-->0?1:0)-1;
            ListNode* temp=nullptr;
            while(rem_nodes>=0){
                temp=curr;
                if(curr)curr=curr->next;
                rem_nodes--;
            }
            if(temp)temp->next=nullptr;
        }
        return ans;
    }
};