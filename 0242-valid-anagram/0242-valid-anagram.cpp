class Solution {
public:
    bool isAnagram(string s, string t) {
        int s_num = s.size();
        int t_num = t.size();
        vector<int> freq('z'-'a'+1 ,0);
        cout<<freq.size()<<endl;

        if(s_num != t_num)
        {
            return false;
        }

        for(int i=0; i<s_num; i++)
        {
            freq[s[i]-'a']++;
            freq[t[i]-'a']--;
        }
        for(int i=0; i<freq.size(); i++)
        {
            if(freq[i] != 0)
            {
                return false;
            }
        }
        return true;
    }
};