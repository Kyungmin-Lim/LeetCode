class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

        // Time complexity: O(N^3) 
        // Space complexity: O(N)
        /*
        int n = nums.size();
        sort(nums.begin(), nums.end());
        set<vector<int>> tmp;
        vector<vector<int>> output;
        for(int i=0; i<n-2; i++)
        {
            for(int j=i+1; j<n-1; j++)
            {
                for(int k=j+1; k<n; k++)
                {
                    if((nums[i]+nums[j]+nums[k]==0)&&(i!=j)&&(j!=k)&&(k!=i))
                    {
                        tmp.insert({nums[i], nums[j], nums[k]});
                    }
                }
            }
        }
        for(auto item: tmp)
        {
            output.push_back(item);
        }
        return output;
    */


        int n = nums.size();
        vector<vector<int>> output;
        set<vector<int>> tmp;
        sort(nums.begin(), nums.end());
    
        for(int i=0; i<n-2; i++)
        {
            int low=i+1; 
            int high=n-1;
            while(low<high)
            {
                if(nums[i]+nums[low]+nums[high]<0)
                {
                    low++;
                }
                else if(nums[i]+nums[low]+nums[high]>0)
                {
                    high--;
                }
                else 
                {
                    tmp.insert({nums[i], nums[low], nums[high]});
                    //while(nums[low]==nums[low+1]) low++;
                    //while(nums[high]==nums[high-1]) high--;
                    low++;
                    high--;
                }
            }
        }
        for(auto iter:tmp)
        {
            output.push_back(iter);
        }
        return output;
    }

};