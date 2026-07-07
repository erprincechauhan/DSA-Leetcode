class Solution {
public:
    long long sumAndMultiply(int n) {
        if (n == 0) return 0;

        vector<int> digits;
        long long sum = 0;
    
        while (n > 0) {
            int remainder = n % 10;
            if (remainder != 0) {
                digits.push_back(remainder);
                sum += remainder;
            }
            n /= 10;
        }
        
        if (digits.empty()) return 0;
        
        long long x = 0;
        for (int i = digits.size() - 1; i >= 0; i--) {
            x = (x * 10) + digits[i];
        }
        
        return x * sum;
    }
        
};