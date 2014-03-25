class Solution {
public:
    int longestConsecutive(vector<int> &num) {
        sort(num.begin(), num.end());
        int max = 1;
        int tmp = 1;
        int len = num.size();
        for(int i=1; i<len; i++)
        {
            if(num[i] == num[i-1] + 1)
            {
                tmp++;
                if(tmp > max)
                    max = tmp;
            }
            else if(num[i] == num[i-1])
                continue;
            else
                tmp = 1;
        }
        return max;
    }
};