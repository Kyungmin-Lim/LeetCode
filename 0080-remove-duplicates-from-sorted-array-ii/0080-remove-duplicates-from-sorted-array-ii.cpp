class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int idx=1;
        int prev=0;
        int curr=0;
        int twice_flag=0;
        int n = nums.size();

        prev = nums[0];

        // Time complexity: O(N)
        // Space complexity: O(1)

        for(int i=1; i<n; i++)
        {            
            curr = nums[i];
            if((prev==curr)&&(twice_flag==0))
            {
                twice_flag = 1;
                nums[idx]=nums[i];
                idx++;
            }            
     
            if(prev!=curr)
            {
                nums[idx]=nums[i];
                idx++;
                twice_flag = 0;
            }
            prev = curr;
        }
        return idx;       
        
    }
};