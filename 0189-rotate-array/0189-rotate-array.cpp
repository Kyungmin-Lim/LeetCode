class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int len = nums.size();

        if (k>len)
        {
            k = k%len;
        }



        vector<int> tmp(k);

        for(int i=0; i<k; i++)
        {
            tmp[i] = nums[len-k+i];
           
        }

        for(int i=0; i<len-k; i++)
        {
            nums[len-1-i] = nums[len-k-1-i];
        }

        for(int i=0; i<k; i++)
        {
            nums[i] = tmp[i];
        }

    }
};