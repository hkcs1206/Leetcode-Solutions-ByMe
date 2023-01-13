class Solution {
public:
    long int squareSum(long int x){
        long int sum = 0,dig,num=x;
        while(num>0){
            dig = num%10;
            sum += dig*dig;
            num /=10;
        }
        return sum;
    }
    bool isHappy(int n) {
        if(n==1 || n==7 || n==1111111) return true;
        long int x = n;
        while(x>9){
        x = squareSum(x);}
        if(x==1) return true;
        else return false;

    }
};
