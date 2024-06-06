class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0)
            return false;
        else{
            int num = x;
            
            int reversed = 0;
            while (num) {
                reversed = reversed * 10 + num % 10;
                num /= 10;
            }

            return x == reversed;
        }
    }
};
