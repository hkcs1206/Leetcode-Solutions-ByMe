class Solution {
public:
    int countDigits(int num) {
        int count = 0,dig;
        int temp=num;
        while(temp>0)
        {
            dig = temp%10;
            if(num%dig==0)
            {
                count+=1;
            }
            temp/=10;
        }
        return count;
    }
};
