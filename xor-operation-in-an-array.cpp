class Solution {
public:
    int xorOperation(int n, int start) {
        int nums[n];
        int x=start;
        for(int i=0;i<n;i++)
        {
            nums[i] = start + 2*i;
        }
        for(int j=1;j<n;j++)
        {
            x = x^nums[j];
        }
        return x;
    }
};
