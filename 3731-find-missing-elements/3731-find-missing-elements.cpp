class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<int> arr;
        
        for (int i = 0; i < nums.size() - 1; i++) {
            int current = nums[i];
            int next = nums[i + 1];
            for (int miss = current + 1; miss < next; miss++) {
                arr.push_back(miss);
            }
        }

        return arr;
    }
};