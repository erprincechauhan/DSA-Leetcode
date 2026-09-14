class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int max_product = nums[0];
        int min_product = nums[0];
        int result = nums[0];

        for(int i = 1; i < nums.size(); i++){
            int current = nums[i];

            if(current < 0){
                swap(max_product,min_product);
            }

            max_product = max(current,max_product*current);
            min_product = min(current,min_product*current);

            result = max(result, max_product);
        }

        return result;
        
    }
};