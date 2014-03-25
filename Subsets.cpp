class Solution {
public:

    vector<vector<int> > subsets(vector<int> &S) {
        sort(S.begin(), S.end());
        int len = S.size();
        vector<vector<int>> vvi;
        int n = pow(2, len);
        for(int k=0; k<n; k++)
        {
            vector<int> vi;
            int i = 0;
            int tmp = k;
            while(tmp)
            {
                if(tmp&1)
                {
                    vi.push_back(S[i]);
                }
                tmp = tmp>>1;
                i ++;
            }
            vvi.push_back(vi);
        }
        return vvi;
    }
};