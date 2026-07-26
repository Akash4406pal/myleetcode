class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        unordered_set<int>st;
        for(int i=0;i<edges.size();i++){
            int node1=edges[i][0];
            int  node2=edges[i][1];
            if(st.count(node1))return node1;
            else st.insert(node1);
            if(st.count(node2))return node2;
            else st.insert(node2);
        }
        return -1;
    }
};