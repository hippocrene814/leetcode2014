class Solution {
public:
    vector<int> grayCode(int n) {
        vector<int> v;
        if(n == 0)
        {
            v.push_back(0);
            return v;
        }
        if(n == 1)
        {
            v.push_back(0);
            v.push_back(1);
            return v;
        }
        v = grayCode(n - 1);
        int len = v.size();
        for(int i=(len-1); i>=0; i--)
        {
            int tmp = (1<<(n-1)) + v[i];
            v.push_back(tmp);
        }
        return v;
    }
};