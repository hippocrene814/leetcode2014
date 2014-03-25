class Solution {
public:
    string longestCommonPrefix(vector<string> &strs) {
        int min = ~(1<<31);
        int len = strs.size();
        string res;
        if(len == 0)
            return res;
        int i, k;
        for(i=0; i<len; i++)
        {
            if(strs[i].length() < min)
                min = strs[i].length();
        }
        if(len == 1)
            return strs[0];
        for(k=0; k<min; k++)
        {
            for(i=1; i<len; i++)
            {
                if(strs[i][k] != strs[i-1][k])
                    return strs[0].substr(0, k);
            }
        }
        res = strs[0].substr(0, k);
        return res;
    }
};