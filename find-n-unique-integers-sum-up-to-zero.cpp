class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> v;
        int x=n/2;
        if(n%2==1){
            v.push_back(0);
            for(int i = 1; i<=x;i++){
                v.push_back(i);
                v.push_back(-1*i);
            }}
        else{
            for(int i = 1; i<=x;i++){
                v.push_back(i);
                v.push_back(-1*i);
            }
        }
        return v;
        }
    };
