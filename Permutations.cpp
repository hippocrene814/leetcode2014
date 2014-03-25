class Solution {
public:
    vector<vector<int> > permute(vector<int> &num) {
        vector<vector<int>> vvi;
        vector<int> line;
        if(num.empty())
        {
            vvi.push_back(line);
            return vvi;
        }
        
        int a = num.back();
        num.pop_back();
        vector<vector<int>> rem = permute(num);
        for(int i=0; i<rem.size(); i++)
        {
            line = rem[i];
            int len = line.size();
            for(int j=0; j<=len; j++)
            {
                vector<int> b = line;
                b.insert(b.begin()+j, a);
                vvi.push_back(b);
            }
            line.clear();
        }
        return vvi;
    }
};