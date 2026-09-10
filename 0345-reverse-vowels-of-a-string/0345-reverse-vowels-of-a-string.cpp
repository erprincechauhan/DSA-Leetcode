class Solution {
public:
    string reverseVowels(string s) {
        int left = 0 ;
        int right = s.size() - 1;

        string vowels = "aeiouAEIOU";

        while(left < right){
            while(left < right && !vowels.contains(s[left])){
                left++;
            }

            while(left < right && !vowels.contains(s[right])){
                right-- ;
            }

            if (left < right){
                swap(s[left], s[right]);
                left++ ;
                right-- ;
            }
        }
        
        return s;
    }
};