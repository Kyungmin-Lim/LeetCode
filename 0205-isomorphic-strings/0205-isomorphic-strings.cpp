class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int num = s.size();
        // 256 arrays with initalize 0
        vector <int> matS(256, 0);
        vector <int> matT(256, 0);

        for(int i=0; i<num; i++)
        {
            char s1 = s[i];
            char t1 = t[i];
            
            if(matS[s1] != 0 && matS[s1] != t1 || matT[t1] != 0 && matT[t1] != s1)
            {
                return false;
            }
            matS[s1] = t1;
            matT[t1] = s1;
        }
        return true;
    }
};