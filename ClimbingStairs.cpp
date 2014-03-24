class Solution {
public:
    int dg(int n, int* f)
    {
        if(n == 0)
            return 0;
        if(n == 1)
            return 1;
        if(n == 2)
            return 2;
        if(f[n] != -1)
            return f[n];
        f[n] = dg(n-1, f) + dg(n-2, f);
        return f[n];
    }
    int climbStairs(int n) {
        int f[n+1];
        memset(f, -1, sizeof(f));
        return dg(n, f);
    }
};