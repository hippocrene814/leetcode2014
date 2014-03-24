class Solution {
public:
    int removeElement(int A[], int n, int elem) {
        int k = 0;
        int i = 0;
        if(n == 0)
            return 0;
        while(i < n)
        {
            if(A[i] == elem)
                i++;
            else
                A[k++] = A[i++];
        }
        return k;
    }
};