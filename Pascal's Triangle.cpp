class Solution {
public:
    vector<vector<int> > generate(int numRows) {
        vector<vector<int>> res;
        if(numRows == 0) 
            return res;
        vector<int> a;
        a.push_back(1);
        res.push_back(a);
        int i = 1;
        while(i < numRows)
        {
            vector<int> b = res[i-1];
            vector<int> c;
            c.push_back(1);
            for(int j=0; j<(b.size()-1); j++)
                c.push_back(b[j]+b[j+1]);
            c.push_back(1);
            res.push_back(c);
            i++;
        }
        return res;
    }
};