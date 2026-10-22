class Solution {
public:
    int subtractProductAndSum(int n) {
        int product = 1;
        int sum = 0;
        while(n > 0){
            int last_dig = n % 10;
            product = product * last_dig;
            sum = sum + last_dig;
            n = n / 10;
        }

        return (product - sum);
        
    }
};