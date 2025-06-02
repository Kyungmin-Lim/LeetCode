class Solution {
public:
    string customSortString(string order, string s) {
        unordered_map<char, int> freq;

        int nums = s.size();
        for(int i=0; i<nums; i++)
        {
            char key = s[i];
            freq[key]++;
        }

        string result;

        for(int i=0; i<order.size(); i++)
        {
            char key = order[i];
            while(freq[key])
            {
                result.push_back(key);
                freq[key]--;
            }
        }

        unordered_map<char, int>::iterator iter;
        if(!freq.empty())
        {
            for(iter = freq.begin(); iter != freq.end(); iter++)
            {
                while(iter->second != 0)
                {
                    result.push_back(iter->first);
                    iter->second--;
                }
            }
        }
        return result;

        
    }
};