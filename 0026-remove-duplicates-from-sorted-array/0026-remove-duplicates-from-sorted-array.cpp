
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int j = 1;
        int num = nums.size();

        for(int i=1; i<num; i++)
        {
            if(nums[i] != nums[i-1])
            {
                nums[j] = nums[i];
                j++;
            }
        }
        return j;

        


        /*
        // it needs more memory, and one more loop needed.
        vector<int> dst;
        int num = nums.size();
        dst.push_back(nums[0]);
        int prev=nums[0];
        for(int i=1; i<num; i++)
        {
            if(nums[i] != prev)
            {
                //nums.erase(nums.begin()+i);
                //printf("nums[i]: %d, prev: %d\n", nums[i], prev);
                dst.push_back(nums[i]);
                prev = nums[i];
            }
        }
        num = dst.size();
       
        for(int i=0; i<num; i++)
        {
            nums[i] = dst[i];
        }

        return dst.size();
        */
    }
};