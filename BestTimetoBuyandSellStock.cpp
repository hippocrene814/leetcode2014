class Solution {
public:
    int maxProfit(vector<int> &prices) {
        int min = ~(1<<31);
        int maxP = 0;
        int len = prices.size();
        if(len == 0 || len == 1)
            return 0;
        for(int i=0; i<len; i++)
        {
            if(prices[i] < min)
                min = prices[i];
            if((prices[i] - min) > maxP)
                maxP = prices[i] - min;
        }
        return maxP;
    }
};