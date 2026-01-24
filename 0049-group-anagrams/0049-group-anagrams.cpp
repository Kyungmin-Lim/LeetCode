class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> map;

        vector<vector<string>> result;

        for(const string& iter:strs)
        {
            string key = iter;
            sort(key.begin(), key.end());
            map[key].push_back(iter);
        }
        for(auto iter:map)
        {
            result.push_back(iter.second);
        }
        return result;

        
    }
};