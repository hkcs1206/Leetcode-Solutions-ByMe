class Solution {
public:
    int tribonacci(int n) {
       int first=0;
       int second=1;
       int third=1;
       int ans =0;
       if(n==0) return 0;
       if(n==1) return 1;
       if(n==2) return 1;
       while(n>2)
       {
           ans = first+second+third;
           first = second;
           second = third;
           third = ans;
           n-=1;
       } 
       return ans;
    }
};
