class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string dst = strs[0];
        string result;
        int len = strs[0].size();
        for(int i=1; i<strs.size(); i++)
        {
            for(int j=0; j<len; j++)
            {
                if(dst[j] != strs[i][j])
                {
                    if(j<len)
                    {
                        len = j;
                        break;
                    }
                }
            }
            if(len == 0)
            {
                break;
            }
        }
        if(len != 0)
        {
            for(int i=0; i<len; i++)
            {
                result += dst[i];
            }
        }
        else
        {
            result = "";
        }
        //cout << len ;
        return result;
    }
};