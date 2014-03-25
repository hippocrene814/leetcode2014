class Solution {
public:
    bool canJump(int A[], int n) {
        int max = 0;
        for(int i=0; i<n; i++)
        {
            if(i > max) 
                return false;
            if((i + A[i]) > max)
                max = i + A[i];
            if(max >= (n-1))
                return true;
        }
        return true;
    }
};