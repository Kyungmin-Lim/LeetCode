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
            if(prices[i]<minVal)
            {
                minVal = prices[i];
            }
            if(prices[i]-minVal > result)
            {
                result = prices[i]-minVal;
            }
        }
        return result;
    }
};