class Solution {
public:
    int dg(int n, int* f)
    {
        if(n == 0 || n == 1)
            return 1;
        if(n == 2)
            return 2;
        if(f[n] != -1)
            return f[n];
        int res = 0;
        for(int i=1; i<=n; i++)
            res = res + dg(i-1, f) * dg(n-i, f);
        f[n] = res;
        return res;
        
    }
    int numTrees(int n) {
        int f[n+1];
        memset(f, -1, sizeof(f));
        return dg(n, f);
    }
};