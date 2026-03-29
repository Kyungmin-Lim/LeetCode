class Solution {
public:
    int maxArea(vector<int>& height) {
        // Time complexity: O(n)
        // Space complexity: O(1)
        int start = 0;
        int end = height.size()-1;
        int result=0;

        while(start<=end)
        {            
            int area = (end-start)*min(height[start], height[end]);
            if(area>result)
            {
                result = area;
            }
            if(height[start] > height[end])
            {
                end--;
            } 
            else
            {
                start++;
            }
        }
        return result;        
    }
};