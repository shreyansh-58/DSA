class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return 0;
        int rev=0;
        int y=x;
        while(y!=0){
            if(rev>INT_MAX/10){
                return 0;
            };
            rev=rev*10 + (y%10);
            y/=10;
        }
        return rev==x;
        
    }
};