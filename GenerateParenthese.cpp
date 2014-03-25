class Solution {
public:
    void paren(int left, int right, vector<string> &vs, string s)
    {
        if(left == 0 && right == 0)
        {
            vs.push_back(s);
            return;
        }
        if(left > right)
            return;
        if(left > 0)
            paren(left-1, right, vs, s+'(');
        if(right > 0)
            paren(left, right-1, vs, s+')');
    }
    vector<string> generateParenthesis(int n) {
        vector<string> vs;
        string s;
        int left = n;
        int right = n;
        paren(left, right, vs, s);
        return vs;
    }
};