class Solution {
public:
int countSegments(string s) { //To learn
        stringstream h(s);
        string word;
        int c=0;
        while(h>>word){
            c++;
        }
        return c;
    }
  int countSegments(string s) {
    int res = 0;
    s.push_back(' ');
    for (int i = 1; i < s.size(); i++) {
        if (s[i] == ' ' && s[i - 1] != ' ') {
            res += 1;
        }
    }
    return res;
}
 int countSegments(string s) { //byme
        int n=s.size();
        int count=0;
        for(int i=0;i<n;i++){
            if(s[i]!=' '){ 
                while(i<n && s[i]!=' '){ 
                    i++; 
                }
                count++; 
            }
        }
        return count;
    }
};
