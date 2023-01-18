class Solution {
public:
    int ArraySum(vector<int>& nums)
    {   int sum = 0;
        int size = nums.size();
        for(int i=0;i<size;i++)
        {
            sum+=nums[i];
        }
        return sum;
    }
    int sumDig(int n)
    {   int sum = 0,dig;
        while(n>0)
        {
            dig = n%10;
            sum+=dig;
            n/=10;
        }
        return sum;
    }
    int DigSumArray(vector<int>& nums)
    {
        int sum = 0;
        for(int i=0;i<nums.size();i++)
        {
            sum = sum + sumDig(nums[i]);
        }
        return sum;
    }
    int differenceOfSum(vector<int>& nums) {
        int res = 0;
        res = DigSumArray(nums) - ArraySum(nums);
        if(res>0) return res;
        else return -1*res;
    }
};
