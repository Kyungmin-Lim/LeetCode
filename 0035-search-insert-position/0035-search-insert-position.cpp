class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {

        int left = 0;
        int right = nums.size()-1;
        int mid;
        while(left<=right)
        {
            mid = left+((right-left)>>1);

            if(nums[mid]==target)
            {
                return mid;
            }
            else if(nums[mid]>target)
            {
                right = mid-1;
            }
            else
            {
                left = mid+1;
            }
        }
        int result = mid;

        if(left==nums.size())
        {
            result = left;
        }
        else if(right<0)
        {
            result = 0;
        }
        else
        {
            result = left;
        }
        return result;
        
    }
};