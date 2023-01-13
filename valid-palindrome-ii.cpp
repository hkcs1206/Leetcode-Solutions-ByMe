class Solution {
public:
    bool validPalindrome(string s) {
        int i = 0;
        int j = s.size()-1;
        int cnt1 = 0;
        
        while(i<j)
        {
            if(s[i] == s[j])
            {
                i++;
                j--;
            }
            else
            {
                cnt1++;
                i++;
            }
            if(cnt1 > 1) 
                break;
        }
        
        
        
        int start = 0;
        int end = s.size()-1;
        int cnt2=0;
        
        while(start < end)
        {
            if(s[start] == s[end])
            {
                start++;
                end--;
            }
            else
            {
               cnt2++;
                end--;
            }
            if(cnt2 > 1) 
                break;
        }
        
        if(cnt1 == 1 || cnt2 ==1) 
            return true;
        if(cnt1 == 0 || cnt2==0)
            return true;
        
        return false;

    }
};
