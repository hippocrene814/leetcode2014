class Solution {
public:
    void com(int n, int k, int &num, vector<int> &vi, vector<vector<int>> &vvi)
    {
        if(num == k)
        {
            vvi.push_back(vi);
            return;
        }
        int c = 0;
        if(!vi.empty())
            c = vi.back();
        if((n-c) < (k-num))
            return;
        for(int i=c+1; i<=n; i++)
        {
            vi.push_back(i);
            num = num + 1;
            com(n, k, num, vi, vvi);
            num = num - 1;
            vi.pop_back();
        }
    }
    vector<vector<int> > combine(int n, int k) {
        int num = 0;
        vector<int> vi;
        vector<vector<int>> vvi;
        if(n == 0 || k == 0 || n < k)
            return vvi;
        com(n, k, num, vi, vvi);
        return vvi;
    }
};