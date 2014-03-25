class Solution {
public:
    bool search(int A[], int n, int target) {
        int low = 0;
        int high = n - 1;
        while(low <= high)
        {
            int mid = low + (high - low) / 2;
            if(A[low] == target || A[mid] == target || A[high] == target)
                return true;
            if(A[mid] < A[low])
            {
                if(A[mid] < target && target < A[high])
                    low = mid + 1;
                else
                    high = mid - 1;
            }
            else if(A[mid] > A[low])
            {
                if(A[low] < target && target < A[mid])
                    high = mid - 1;
                else
                    low = mid + 1;
            }
            else
                low = low + 1;
        }
        return false;
    }
};