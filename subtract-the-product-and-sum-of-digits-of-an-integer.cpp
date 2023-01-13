class Solution {
public:
   int subtractProductAndSum(int n) {
        int dig=0,temp=n,res=0;
        int sum=0,pro=1;
        while(temp>0)
        {
            dig = temp%10;
            sum = sum + dig;
            pro = pro * dig;
            temp = temp /10;
        }
        res = pro - sum;
        return res;
    }
};
