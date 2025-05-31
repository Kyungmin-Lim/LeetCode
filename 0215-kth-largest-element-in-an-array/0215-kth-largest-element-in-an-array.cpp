class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        // counting sort
        int min_val = INT_MAX;
        int max_val = INT_MIN;

        for(int i=0; i<nums.size(); i++)
        {
            min_val = min(min_val, nums[i]);
            max_val = max(max_val, nums[i]);
        }

        int new_num = max_val-min_val+1;

        vector<int> count(new_num);

        for(int i=0; i<nums.size(); i++)
        {
            count[nums[i]-min_val]++;
        }

        int remain = k;
        for(int i=new_num-1; i>=0; i--)
        {
            remain -= count[i];
            if(remain<=0)
            {
                return i+min_val;
            }
        }

        return 0;
        
    }
};