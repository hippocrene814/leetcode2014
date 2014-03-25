class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> vi;
        if(rowIndex == 0)
        {
            vi.push_back(1);
            return vi;
        }
        if(rowIndex == 1)
        {
            vi.push_back(1);
            vi.push_back(1);
            return vi;
        }
        int i = 2;
        vi.push_back(1);
        vi.push_back(1);
        while(i <= rowIndex)
        {
            for(int j=0; j<(i-1); j++)
                vi[j] = vi[j] + vi[j+1];
            vi.insert(vi.begin(), 1);
            i++;
        }
        return vi;
    }
};