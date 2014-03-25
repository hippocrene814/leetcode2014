class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0)
            return false;
        if(x < 10)
            return true;
        int bit = 0;
        int quo = x;
        while(quo)
        {
            quo = quo/10;
            bit++;
        }
        quo = x;
        for(int i=0; i<(bit/2); i++)
        {
            int left = x / pow(10, bit-i-1);
            x = x % (int) pow(10, bit-i-1);
            int right = quo % 10;
            quo = quo / 10;
            if(left != right)
                return false;
        }
        return true;
    }
};