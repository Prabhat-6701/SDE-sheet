class Solution {
public:
    bool isPalindrome(int x) {
        int temp = x;
        if( x < 0){
            return false;
        }
         long long rev = 0;
        while(x > 0){
            int digit = x % 10;
            rev = rev * 10 + digit;
            x = x /10;
        }

        if(rev == temp){
            return true;
        }
        return false;
        
    }
};