class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int left = 0;
        int right = nums.size()-1;
        // nums.push_back(-INT_MAX);

        while(left<right)
        {
            int mid = left + ((right-left)>>1);
            if(mid+1>nums.size()-1)
            {
                break;
            }
            if(nums[mid]<nums[mid+1])
            {
                left = mid+1;
            }
            else
            {
                right = mid;
            }
        }
        return left;
        
    }
};