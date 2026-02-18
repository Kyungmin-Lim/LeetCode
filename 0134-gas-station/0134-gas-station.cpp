class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int CurrGas=0;
        int TotCost=0;
        int num = gas.size();
        int StartNode=0;

        for(int i=0; i<num; i++)
        {
            int diff = gas[i]-cost[i];
            CurrGas+=diff;
            TotCost+=diff;

            if(CurrGas<0)
            {
                StartNode = i+1;
                CurrGas=0;
                // TotCost=0;
            }
        }

        if(TotCost<0)
        {
            return -1;
        }
        else
        {
            return StartNode;
        }        
    }
};