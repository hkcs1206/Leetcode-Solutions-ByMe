class Solution {
public:
    int firstBadVersion(int n) {
        int i =1;
        while(!isBadVersion(i))
        {
            i+=1;
        }
        return i;
    }
};
