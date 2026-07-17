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
            int curr_nodes=0;
            ListNode* temp=nullptr;
            while(curr_nodes<avg){
                if(!ans[i])ans[i]=curr;
                temp=curr;
                if(curr)curr=curr->next;
                curr_nodes++;
            }
            if(extra>0){
                if(!ans[i])ans[i]=curr;
                temp=curr;
                if(curr)curr=curr->next;
                extra--;
            }
            if(temp)temp->next=nullptr;
        }
        return ans;
    }
};