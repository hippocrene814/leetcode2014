class Solution {
public:
    int reverse(int x) {
        if(x == 0) return 0;
        vector<int> v;
        int c = x / 10;
        int y = x % 10;
        v.push_back(y);
        while(c != 0)
        {
            y = c % 10;
            c = c / 10;
            v.push_back(y);
        }
        int res = 0;
        for(int i=0; i<v.size(); i++)
            res = res*10 + v[i];
        return res;
    }
};