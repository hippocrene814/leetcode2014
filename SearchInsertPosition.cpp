class Solution {
public:
    int searchInsert(int A[], int n, int target) {
        int res = 0;
        if(n == 0) return res;
        int i;
        for(i=0; i<n; i++)
        {
            if(target <= A[i])
            {
                res = i;
                break;
            }
        }
        if(i == n)
            res = n;
        return res;
    }
};