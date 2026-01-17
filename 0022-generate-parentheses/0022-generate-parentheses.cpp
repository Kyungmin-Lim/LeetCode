class Solution {
public:
    void bracketing(vector<string>&result, string current, int open_count, int close_count, int n){
        if((open_count==n)&&(close_count==n))
        {
            result.push_back(current);
        }
        if(open_count<n)
        {
            bracketing(result, current+'(', open_count+1, close_count, n);
        }
        if((close_count<n)&&(close_count<open_count))
        {
            bracketing(result, current+')', open_count, close_count+1, n);
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string> result;
        int open_count=0;
        int close_count=0; 
        bracketing(result, "", open_count, close_count, n);
        return result;
        
    }
};