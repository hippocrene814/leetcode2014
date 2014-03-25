class Solution {
public:
    int pow(int n) {
        int m=n;
        int tmp=2;
        int res=1;
        while(m)
        {
            if(m&1)
                res=res*tmp;
            tmp=tmp*tmp;
            m=m>>1;
        }
        return res;
    }
    vector<vector<int> > subsetsWithDup(vector<int> &S) {
        sort(S.begin(), S.end());
        set<vector<int>> subsets;
        vector<vector<int>> res;
        vector<int> subset;
        int x=0;
        int len=S.size();
        int n=pow(len);
        while(x<n)
        {
            int i=0;
            int tmp=x;
            while(tmp)
            {
                if(tmp&1)
                    subset.push_back(S[i]);
                tmp=tmp>>1;
                i++;
            }
            subsets.insert(subset);
            subset.erase(subset.begin(), subset.end());
            x++;
        }
        set<vector<int>>::iterator iter;
        for(iter=subsets.begin(); iter!=subsets.end(); iter++)
            res.push_back(*iter);
        return res;        
    }
};