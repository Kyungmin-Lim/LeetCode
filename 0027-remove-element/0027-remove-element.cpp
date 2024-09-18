class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int count = nums.size();
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i]==val)
            {
                nums[i] = -1;
                count--;
            }
        }

        for(int i=0; i<count; i++)
        {
            if(nums[i]==-1)
            {
                for(int j=i+1; j<nums.size(); j++)
                {
                    if(nums[j] != -1)
                    {
                        int tmp = nums[i];
                        nums[i] = nums[j];
                        nums[j] = tmp;
                    }
                }
                
            }

        }

        return count;
    }
};