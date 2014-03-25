class Solution {
public:
    int maxArea(vector<int> &height) {
        int n=height.size();
        if(n==0||n==1) return 0;
        int left=0;
        int right=n-1;
        int max=(right-left)*min(height[left], height[right]);
        while(left<right)
        {
            if(height[left]<height[right])
            {
                left++;
            }
            else 
            {
                right--;
            }
            int tmp=(right-left)*min(height[left], height[right]);
            if(tmp>max) max=tmp;
        }
        return max;
        
    }
};