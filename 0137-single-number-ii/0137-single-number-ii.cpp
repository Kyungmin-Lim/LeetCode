class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int result = 0;
        int prev;
        int curr;
        int i=1;

        if(nums.size()==1)
        {
            return nums[0];
        }

        while(i<nums.size())
        {
            prev = nums[i-1];
            curr = nums[i];
            if(prev==curr)
            {
                if(i+3 < nums.size())
                {
                    i+=3;
                }
                else
                {
                    result = nums[i+2];
                    break;
                }
            }
            else
            {
                result = nums[i-1];
                break;
            }
        }
        return result;
        
    }
};