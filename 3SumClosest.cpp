class Solution {
public:
    int threeSumClosest(vector<int> &num, int target) {
        int res = ~(1<<31);
        sort(num.begin(), num.end());
        int tsum, tmp, sum;
        int l, r;
        int n = num.size();
        for(int i=0; i<(n-2); i++)
        {
            tsum = target - num[i];
            l = i + 1;
            r = n - 1;
            while(l < r)
            {
                if((num[l] + num[r]) == tsum)
                    return target;
                else if((num[l] + num[r]) < tsum)
                {
                    tmp = abs(num[l] + num[r] - tsum);
                    if(tmp < res)
                    {
                        sum = num[l] + num[r] + num[i];
                        res = tmp;
                    }
                    l++;
                }
                else if((num[l] + num[r]) > tsum)
                {
                    tmp = abs(num[l] + num[r] - tsum);
                    if(tmp < res)
                    {
                        sum = num[l] + num[r] + num[i];
                        res = tmp;
                    }
                    r--;
                }
            }
        }
        return sum;
    }
};