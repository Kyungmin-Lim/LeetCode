class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // Time complexity: O(N)
        // Space complexity: O(1)
        int result=0;
        int minVal=prices[0];

        if(prices.size()==1)
        {
            return 0;
        }

        for(int i=1; i<prices.size(); i++)
        {
            minVal = min(prices[i], minVal);
            result = max(prices[i]-minVal, result);
        }
        return result;
    }
};