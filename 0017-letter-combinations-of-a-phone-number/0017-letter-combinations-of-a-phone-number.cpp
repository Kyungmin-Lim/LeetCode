class Solution {
public:
    vector<string> letterCombinations(string digits) {
        int n = digits.size();
        vector<string> result;
        if(n==0)
        {
            result.push_back("");
            return result;
        }
        
        string path;
        unordered_map<char, string> phone;
        phone['2'] = "abc";
        phone['3'] = "def";
        phone['4'] = "ghi";
        phone['5'] = "jkl";
        phone['6'] = "mno";
        phone['7'] = "pqrs";
        phone['8'] = "tuv";
        phone['9'] = "wxyz";

        int start = 0;
        backtracking(start, n, digits, phone, path, result);
        
        return result;
    }
    void backtracking(int start, int n, string& digits, unordered_map<char, string>& phone, string& path, vector<string>& result)
    {
        if(path.size() == n)
        {
            result.push_back(path);
            return;
        }
        for(char a:phone[digits[start]])
        {
            path.push_back(a);
            backtracking(start+1, n, digits, phone, path, result);
            path.pop_back();
        }


    }
};