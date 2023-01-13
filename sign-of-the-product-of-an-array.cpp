class Solution {
public:
    int arraySign(vector<int>& nums) {
        int size = nums.size();
        int cnt = 0;
        for(int i=0;i<size;i++)
        {
            if(nums[i]==0) return 0;
            else
            {
                if(nums[i]<0) 
                    cnt+=1;
            }
        }
        if(cnt%2==0) return 1;
        else return -1;
    }
};
