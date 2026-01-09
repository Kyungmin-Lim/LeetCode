class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size()-1;
        int mid = (low+high)>>1;

        if(target>nums[high])
        {
            return high+1;
        }
        if(target<nums[low])
        {
            return low;
        }

        while(low<=high)
        {
            if(target < nums[mid])
            {
                high = mid-1;
            }
            else if(target > nums[mid])
            {
                low = mid+1;
            }
            else
            {
                return mid;
            }           

            mid = (low+high)>>1;
            // if(mid==low)
            // {
            //     return high;
            // }
            // else if(mid==high)
            // {
            //     return low;
            // }     
        }
        return low;
    }
};