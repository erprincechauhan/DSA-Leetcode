class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int element ;
        long long  count = 0;
        long long  count1 = 0;
        for(int i = 0 ; i < nums.size(); i++){
            if(count == 0){
                count = 1;
                element = nums[i];
            }
            else if(element == nums[i] ){
                    count++;
            }
            else {
                count--;
            }
        }

        for(int i = 0; i < nums.size(); i++){
            if(element == nums[i]) count1++;
        }

        if (count1 > nums.size()/2) return element;
        return -1;
    }
};