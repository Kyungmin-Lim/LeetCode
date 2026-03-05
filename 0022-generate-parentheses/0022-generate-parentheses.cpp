class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> result;
        string paren;
        int open=0;
        int close=0;
        backtracking(result, paren, open, close, n);

        return result;
    }
    void backtracking(vector<string>& result, string paren, int open, int close, int n)
    {
        if(paren.size() == n*2)
        {
            result.push_back(paren);
            return;
        }

        if(open>=close)
        {            
            if(open<n)
            {                
                paren.push_back('(');                
                backtracking(result, paren, open+1, close, n);
                paren.pop_back();
            }
            
            if(close<n)
            {
                paren.push_back(')');
                backtracking(result, paren, open, close+1, n);
                paren.pop_back();
            }
        }
    }
};