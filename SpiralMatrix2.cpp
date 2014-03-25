class Solution {
public:
    vector<vector<int> > generateMatrix(int n) {
        vector<vector<int>> res(n, vector<int> (n, 0));
        if(n == 0)
            return res;
        int i = 0;
        int j = 0;
        int k = 1;
        while(k <= n * n)
        {
            while(j < n && k <= n * n)
			{
				if(res[i][j] == 0)
					res[i][j++] = k++;
				else break;
			}
            j--;
            i++;
            while(i < n && k <= n * n)
			{
				if(res[i][j] == 0)
					res[i++][j] = k++;
				else break;
			}
            i--;
            j--;
            while(j >= 0 && k <= n * n)
			{
				if(res[i][j] == 0)
					res[i][j--] = k++;
				else break;
			}
            j++;
            i--;
            while(i >= 0 && k <= n * n)
			{
				if(res[i][j] == 0)
					res[i--][j] = k++;
				else break;
			}
            i++;
            j++;
        }
        return res;
    }
};