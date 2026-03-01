class Solution {
public:
    vector<string> letterCombinations(string digits) {
        int n = digits.size();
        vector<string> result;
        if(n==0)
        {
            return result;
        }
        
        string path;
        vector<string> phone = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

        int start = 0;
        backtracking(start, n, digits, phone, path, result);
        
        return result;
    }
    void backtracking(int start, int n, string& digits, vector<string>& phone, string& path, vector<string>& result)
    {
        if(path.size() == n)
        {
            result.push_back(path);
            return;
        }
        for(char a:phone[digits[start]-'0'])
        {
            path.push_back(a);
            backtracking(start+1, n, digits, phone, path, result);
            path.pop_back();
        }


    }
};