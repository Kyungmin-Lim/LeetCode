class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int result=INT_MAX;
        int sum=0;
        int i=0;
        int j=0;

        for(i=0; i<n; i++)
        {
            sum+=nums[i];

            while(sum>=target)
            {
                result = min(result, i-j+1);
                sum -= nums[j];
                j++;
            }            
        }
        if(result==INT_MAX)
        {
            result = 0;
        }
        return result;
        
    }
};