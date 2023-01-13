class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int size = nums.size();
        int count = 0;
        for(auto i = nums.begin();i!=nums.end();++i)
        {
            if(*i<target){ count++;}

        }
        return count;
    }
};
