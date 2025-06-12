class Solution {
public:
    int maximumSwap(int num) {
        

        string str = to_string(num);
        int n = str.size();

        vector <int> LastOcc(10, -1);
        for(int i=0; i<n; i++)
        {
            int idx = str[i]-'0';
            LastOcc[idx] = i;
        }

        int result = num;
        for(int i=0; i<n; i++)
        {
            for(int D=9; D>str[i]-'0'; D--)
            {
                if(LastOcc[D] > i)
                {
                    swap(str[i], str[LastOcc[D]]);                    
                    result = stoi(str);
                    return result;             

                }
            }
        }

        return result;

        
    }
};