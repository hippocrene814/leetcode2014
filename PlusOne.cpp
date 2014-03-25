class Solution {
public:
    vector<int> plusOne(vector<int> &digits) {
        int len = digits.size();
        int c = 1;
        for(int i=len-1; i>=0; i--)
        {
            digits[i] = digits[i] + c;
            if(digits[i] == 10)
            {
                digits[i] = 0;
                c = 1;
            }
            else
                c = 0;
        }
        if(c == 1)
        digits.insert(digits.begin(), 1);
        return digits;
    }
};