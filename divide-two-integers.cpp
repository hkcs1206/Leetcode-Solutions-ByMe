class Solution {
public:
    long int divide(long int dividend, long int divisor) {
        if(dividend == -2147483648 && divisor == -1 ) return 2147483647;
        long int quotient = dividend/divisor;
        return quotient;
    }
};
