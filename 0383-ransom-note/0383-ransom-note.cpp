class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> m;

        int n = magazine.size();
        for(int i=0; i<n; i++)
        {
            if(m.find(magazine[i]) == m.end())
            {
                m[magazine[i]] = 1;
            }
            else
            {
                m[magazine[i]]++;
            }
        }

        for(int i=0; i<ransomNote.size(); i++)
        {
            if(m.find(ransomNote[i])==m.end() || m[ransomNote[i]]==0)
            {
                return false;
            }            
            else
            {
                m[ransomNote[i]]--;
            }
        }
        return true;
        
    }
};