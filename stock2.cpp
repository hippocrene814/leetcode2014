class Solution {
public:
    int maxProfit(vector<int> &prices) {
        int res = 0;
        int len = prices.size();
        if(len == 0 || len == 1)
            return 0;
        for(int i=1; i<len; i++)
        {
            if(prices[i] > prices[i-1])
                res = res + prices[i] - prices[i-1];
        }
        return res;
    }
};