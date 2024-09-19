class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int cnt = nums.size();        
        int dst=0;
        for(int i=0; i<cnt; i++)
        {
            if(nums[i] != val)
            {
                nums[dst] = nums[i];
                dst++;
            }
        }
        return dst;              
    }
};