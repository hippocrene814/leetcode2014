class Solution {
public:
    int romanToInt(string s) {
        map <char, int> hash;
        hash['M'] = 1000;
        hash['D'] = 500;
        hash['C'] = 100;
        hash['L'] = 50;
        hash['X'] = 10;
        hash['V'] = 5;
        hash['I'] = 1;
        int len = s.length();
        if(len == 0) return 0;
        int sum = hash[s[0]];
        for(int i=1; i<len; i++)
        {
            sum = sum + hash[s[i]];
            if(hash[s[i]] > hash[s[i-1]])
                sum = sum - 2*hash[s[i-1]];
        }
        return sum;
    }
};