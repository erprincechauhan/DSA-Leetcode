class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int count = 0;
        vector<int> nums2;
        nums2 = heights;

        sort(heights.begin(), heights.end());

        for (int i = 0; i < heights.size(); i++) {
            if (heights[i] != nums2[i]) {
                count++;
            }
        }

        return count;
    }
};