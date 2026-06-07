class Solution {
public:
    int maxProfit(vector<int>& prices) {
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