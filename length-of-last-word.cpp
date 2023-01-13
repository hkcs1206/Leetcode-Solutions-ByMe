class Solution {
public:
    string String_req(string s){
        int size = s.length();
        for(int i = size-1;i>0;i--){
            if(s[i]==' '){
                s.pop_back();
            }
            else break;
        }
        return s;

    }
    int lengthOfLastWord(string s) {
        s = String_req(s);
        int size = s.length();
        int count = 0;
        for(int i = size;i>=0;i--)
        {
            if(s[i]!=' ' ){
                count +=1;
            }
            else break;
        }
        return count-1;
    }
};
