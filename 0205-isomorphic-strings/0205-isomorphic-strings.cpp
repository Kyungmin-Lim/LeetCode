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


        /*

        for(int i=0; i<110; i++)
        {
            mat[i] = -1;
        }

        for(int i=0; i<num; i++)
        {
            int val = int(s[i])-int('a');
            int dst = int(t[i])-int('a');
            if(mat[val] == -1)
            {
                 mat[val] = dst;
               
            }
            else
            {
                if(mat[val] != dst)
                {
                    return false;
                }
            }
        }
        */

        /*
        for(int i=0; i<26; i++)
        {
           printf("%c ", char(mat[i] + 'a'));
        }
        */
        //sort(mat.begin(), mat.end(), greater <int>());
        //printf("\n num: %d \n", num);
        /*
        for(int i=0; i<26; i++)
        {
           //printf("%c ", char(mat[i] + 'a'));
           printf("%d ", mat[i]);
        }
        printf("\n num: %d \n", num);
        */

        /*
        int tmp;
        for(int i=0; i<num-1; i++)
        {
            printf("%d ", mat[i]);
            if(mat[i]!=-1)
            {
                //tmp = mat[i];
                if(mat[i]==mat[i+1])
                {
                    return false;                 
                }                
            }
            
        }

        return true;
*/

/*
        unordered_map<char, char> m;
        int num = s.size();
        for(int i=0; i<num; i++)
        {
            if(m.find(s[i]) == m.end()) 
            {
                m[s[i]] = t[i];
                //m[t[i]] = s[i];
                printf("%d: %c %c %c\n", i, s[i], t[i], m[s[i]]);
            }
            else 
            {
                if(m[s[i]] != t[i])
                {
                    return false;                    
                }
            }

        }
        return true;
*/
    }
};