class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // Time complexity: O(N)
        // Space complexity: O(1)
        if(prices.size()<=1)
        {
            return 0;
        }
        
        int minVal = prices[0];
        int result=0;

        for(int i=1;i<prices.size(); i++)
        {
            result = max(result, prices[i]-minVal);
            minVal = min(minVal, prices[i]);
        }
        return result;
        
    }
};