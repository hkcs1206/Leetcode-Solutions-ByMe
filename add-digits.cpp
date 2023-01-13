class Solution {
public:
    long int sumD(int x){
        int sum=0,dig;
        while(x!=0){
            dig = x%10;
            sum+=dig;
            x/=10;
        }
        return sum;
    }
    int addDigits(int num) {
        if(num<10 && num>=0) return num;
        int x=num;
        while(x>9){
            x = sumD(x);
        }
        return x;

    }
};
