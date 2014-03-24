class Solution {
public:
    int removeDuplicates(int A[], int n) {
        if(n == 0)
            return 0;
        int k = 1;
        int i = 1;
        while(i < n)
        {
            if(A[i] == A[i-1])
                i++;
            else
                A[k++] = A[i++];
        }
        return k;
    }
};