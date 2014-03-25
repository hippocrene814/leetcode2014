class Solution {
public:
    int removeDuplicates(int A[], int n) {
        if(n == 0 || n == 1)
            return n;
        int i = 1;
        int k = 1;
        int count = 0;
        while(i < n)
        {
            if(A[i] != A[i-1])
            {
                A[k++] = A[i++];
                count = 0;
            }
            else
            {
                count++;
                if(count == 1)
                    A[k++] = A[i++];
                else
                    i++;
            }
        }
        return k;
    }
};