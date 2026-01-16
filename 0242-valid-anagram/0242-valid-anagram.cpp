class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size())
        {
            return false;
        }

        /*
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());

        if(t==s)
        {
            return true;
        }
        else
        {
            return false;
        }
        */

        int t_num = t.size();
        for(int i=0; i<s.size(); i++)
        {
            for(int j=0; j<t_num; j++)
            {
                if(s[i]==t[j])
                {
                    t.erase(j, 1);
                    
                    t_num--;
                    // cout << t << endl;
                    break;
                }
            }
        }
        
        if(t_num==0)
        {
            return true;
        }
        else
        {
            return false;
        }
        
    }
};