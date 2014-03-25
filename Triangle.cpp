class Solution {
public:
    int minimumTotal(vector<vector<int> > &triangle) {
        int n = triangle.size();
        int tmp = triangle[0][0];
        vector<int> line;
        line.push_back(tmp);
        for(int i=1; i<n; i++) 
        {
            vector<int> tmp2;
            tmp2.push_back(line[0] + triangle[i][0]);
            for(int j=1; j<i; j++)
            {
                int tmp3 = min(line[j-1], line[j]) + triangle[i][j];
                tmp2.push_back(tmp3);
            }
            tmp2.push_back(line[i-1] + triangle[i][i]);
            line.erase(line.begin(), line.end());
            line = tmp2;
        }
        int min = ~(1<<31);
        for(int k=0; k<line.size(); k++)
        {
            if(line[k] < min)
                min = line[k];
        }
        return min;
    }
};