class Solution {
public:
    int countDig(int n)
    {
        int count=0,dig;
        while(n>0)
        {
            dig = n%10;
            count+=dig;
            n/=10;
        }
        return count;
    }
    int countEven(int num) {
        int c = 0;
        for(int i=0;i<=num;i++)
        {
            int x = countDig(i);
            if(x%2==0)
                c = c+1;
        }
        return c-1;
    }
};
