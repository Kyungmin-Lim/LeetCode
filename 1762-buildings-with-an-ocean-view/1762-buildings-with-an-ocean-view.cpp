class Solution {
public:
    vector<int> findBuildings(vector<int>& heights) {
        int num = heights.size();
        vector<int> result;

        result.insert(result.begin(), num-1);
        if(num == 1)
        {            
            return result;            
        }

        int tallest_buildings = heights[num-1];
        for(int i=num-2; i>=0; i--)
        {            
            if(heights[i] - tallest_buildings > 0)
            {
                result.insert(result.begin(), i);
            }
            
            if(heights[i] > tallest_buildings)
            {
                tallest_buildings = heights[i];
            }

        }
        return result;
        
    }
};