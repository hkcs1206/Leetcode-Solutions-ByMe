class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        long int num=x,dig,rev=0;
        while(x!=0){
            dig = x%10;
            rev = rev*10 + dig;
            x = x/10;
        }
        if(rev==num) return true;
        else return false;
    }
};
