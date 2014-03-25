class Solution {
public:
    int lengthOfLastWord(const char *s) {
        int st, ed;
        int i = 0;
        while(s[i] != '\0')
            i++;
        i--;
        while(s[i] == ' ')
            i--;
        ed = i;
        while(s[i] != ' ' && (i>=0))
            i--;
        st = i + 1;
        return ed-st+1;
    }
};