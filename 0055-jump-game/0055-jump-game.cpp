class Solution {
public:
    bool Jump(vector<int>& nums, int curr_idx){
        int dst = nums.size()-1;
        int next_idx = nums[curr_idx];
        if((dst!=0)&&(next_idx==0))
        {
            return false;
        }

        if(curr_idx+nums[curr_idx]>=dst)
        {
            return true;
        }
        else
        {
            for(int i=1; i<=next_idx; i++)
            {
                
                if(Jump(nums, curr_idx+i) == true)
                {
                    return true;
                }
                
            }
        }
        return false;
    }

    bool canJump(vector<int>& nums) {
        int curr_idx = 0;
        return Jump(nums, curr_idx);
    }
};