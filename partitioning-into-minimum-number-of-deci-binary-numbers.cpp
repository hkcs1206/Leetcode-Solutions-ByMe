class Solution {
public:
    int minPartitions(string n) {
        int s = 0;
        int size = n.size();
        for(int i=0;i<size;i++)
        {
            if(int(n[i])>s)
            {
                s = int(n[i]);
            }
        }
        return int(s - '0');
    }
};
