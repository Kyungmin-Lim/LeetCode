class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        
        vector<string> dst;        
        int n = nums.size();
        if(n==0)
        {
            return dst;
        }

        bool cont = false;
        int start = nums[0];
        int a = start;
        


        for(int i=1; i<n; i++)
        {
            if(a+1 == nums[i])
            {
                a+=1;
                cont = true;
                //dst.push_back(to_string(nums[i]);
            }
            else
            {
                if(cont==true)
                {
                    dst.push_back(to_string(start) + '-' + '>' + to_string(a));
                    
                    
                }
                else
                {
                    dst.push_back(to_string(a));
                }
                start = nums[i];
                a = start;
                cont=false;
                //a = nums[i];
            }
        }    
        if(cont == true)
        {
            dst.push_back(to_string(start) + '-' + '>' + to_string(a));
        }
        else
        {
            dst.push_back(to_string(nums[n-1]));
        }
        return dst;    
    }
};