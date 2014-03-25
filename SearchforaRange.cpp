class Solution {
public:

    int bSearch1(int A[], int low, int high, int target)
    {
        while(low <= high)
        {
            int mid = low + (high - low)/2;
            if(A[mid] == target)
                return mid;
            if(target < A[mid])
                high = mid - 1;
            else if(A[mid] < target)
                low = mid + 1;
        }
        return -1;
    }
    int bSearchLeft(int A[], int low, int high, int target)
    {
        if(A[high] != target || low > high)
            return high + 1;
        while(low<high)
        {
            int mid = low + (high - low)/2;
            if(A[mid] >= target)
                high = mid - 1;
            else if(A[mid] < target)
                low = mid + 1;
        }
		if(A[high] == target)
			return high;
		else return high+1;
    }
    int bSearchRight(int A[], int low, int high, int target)
    {
        if(A[low] != target || low > high)
            return low - 1;
        while(low<high)
        {
            int mid = low + (high - low)/2;
            if(A[mid] > target)
                high = mid - 1;
            else if(A[mid] <= target)
                low = mid + 1;
        }
		if(A[low] == target)
			return low;
		else return low-1;
    }
    vector<int> searchRange(int A[], int n, int target) {
        int low = 0;
        int high = n-1;
        int m = bSearch1(A, low, high, target);
        vector<int> res;
        if(m == -1)
        {
            res.push_back(-1);
            res.push_back(-1);
            return res;
        }
        int a = bSearchLeft(A, low, m - 1, target);
        int b = bSearchRight(A, m + 1, high, target);
        res.push_back(a);
        res.push_back(b);
        return res;
    }
};