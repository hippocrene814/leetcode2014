class Solution {
public:
    int trap(int A[], int n) {
        if(n == 0 || n == 1) 
            return 0;
        int left[n] ;
        int right[n];
        left[0] = 0;
        left[n-1] = 0;
        right[0] = 0;
        right[n-1] = 0;
        int sum = 0;
        int i;
        for(i=1; i<(n-1); i++)
            left[i] = max(left[i-1], A[i-1]);
        for(i=n-2; i>0; i--)
            right[i] = max(right[i+1], A[i+1]);
        for(i=1; i<(n-1); i++)
        {
            int h = min(left[i], right[i]);
            if(A[i] < h)
                sum = sum + h - A[i];
        }
        return sum;
    }
};