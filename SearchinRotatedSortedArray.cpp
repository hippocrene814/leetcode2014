class Solution {
public:
    int search(int A[], int n, int target) {
        int low=0; 
        int high=n-1;
        int mid;
        while(low<=high)
        {
            mid=low+(high-low)/2;
            if(A[mid]==target) return mid;
            if(A[mid]>=A[low])
            {
                if(A[low]<=target&&A[mid]>target)
                    high=mid-1;
                else
                    low=mid+1;
            }
            else
            {
                if(A[high]>=target&&A[mid]<target)//attention: "="
                    low=mid+1;
                else
                    high=mid-1;
            }
        }
        return -1;
    }
};