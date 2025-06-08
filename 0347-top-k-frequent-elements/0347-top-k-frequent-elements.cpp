class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        // store freq. of each num.
        // key: element 
        // value: freq.
        unordered_map<int, int> mp;

        // store counts of each element
        vector<vector<int>> arry(n+1);

        

        for(int i=0; i<n; i++)
        {
            mp[nums[i]]++;
        }

        for(auto [key, freq]: mp)
        //for([key, freq]: mp)
        {
            arry[freq].push_back(key);
        }

        int count = 0;
        vector<int> result;
        for(int i=n; i>=1 && count<k; i--)
        {
            if(!arry[i].empty())
            {
                for(int i:arry[i])
                {
                    result.push_back(i);
                    count++;
                }
                
            }
            

        }
        return result;
        
    }
};