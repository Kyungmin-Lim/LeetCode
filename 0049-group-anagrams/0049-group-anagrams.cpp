class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> map;

        vector<vector<string>> result;

        for(auto iter:strs)
        {
            string val = iter;
            sort(iter.begin(), iter.end());
            map[iter].push_back(val);
        }
        for(auto iter:map)
        {
            result.push_back(iter.second);
        }
        return result;

        
    }
};