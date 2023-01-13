#include<math.h>
class Solution {
public:
    bool isPowerOfFour(long int n) {
        if (n<=0) return false;
        double p;
        p = log10(n) / log10(4);
        if(p - int(p)==0) return true;
        else return false;
    }
};
