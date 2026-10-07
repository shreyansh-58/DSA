class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return 0;
        long int rev=0;
        int y=x;
        while(y!=0){
            rev=rev*10+(y%10);
            y/=10;
        }
        if(rev==x) return 1;
        else return 0;
        
    }
};