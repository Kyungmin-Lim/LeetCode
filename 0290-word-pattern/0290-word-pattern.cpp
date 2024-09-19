class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char, string> m;
        unordered_map<string, char> m1;

        string buffer;
        int num = pattern.size();
        int idx=0;
        stringstream ss(s);

        // To split string s, put s into stringstream.  
        // using getline, string s is splitted into decimiter ' ' and saved as buffer
        while(getline(ss, buffer, ' '))
        {
            printf("idx: %d, buffer: %s\n", idx, buffer.c_str());
            // find function goed to end(), it means there is no corresponding key.
            if(m.find(pattern[idx]) != m.end() && m[pattern[idx]] != buffer)
            {
                return false;
            }
            else
            {
                m[pattern[idx]] = buffer;
                
            }
 
            if(m1.find(buffer) != m1.end() && m1[buffer] != pattern[idx])
            {
                return false;
            }
            else
            {
                m1[buffer] = pattern[idx];
            }
            idx++;
        }
        if(idx != num)
        {
            return false;
        }
        else
        {
            return true;
        }
    }

    
};