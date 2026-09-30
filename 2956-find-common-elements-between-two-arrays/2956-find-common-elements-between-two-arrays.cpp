class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
        vector<bool> existsIn1(101, false);
        vector<bool> existsIn2(101, false);
        
        for (int x : nums1) existsIn1[x] = true;
        for (int x : nums2) existsIn2[x] = true;
        
        int ans1 = 0, ans2 = 0;
        for (int x : nums1) {
            if (existsIn2[x]) ans1++;
        }
        for (int x : nums2) {
            if (existsIn1[x]) ans2++;
        }
        
        return {ans1, ans2};
    }
};
