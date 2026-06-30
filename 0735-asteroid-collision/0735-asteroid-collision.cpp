class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> st;
        vector<int> ans;
        for (int ast : asteroids) {
            if (st.empty() || ast > 0) {
                st.push(ast);
            } else if (st.top() < 0) {
                st.push(ast);
            } else {
                bool alive = true;
                while (!st.empty() && st.top() > 0) {
                    int top = st.top();
                    if (top == abs(ast)) {
                        st.pop();
                        alive = false;
                        break;
                    } else if (top < abs(ast)) {
                        st.pop();
                    } else { 
                        alive = false;
                        break;
                    }
                }
                if (alive) st.push(ast);
            }
        }
        while (!st.empty()) {
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};