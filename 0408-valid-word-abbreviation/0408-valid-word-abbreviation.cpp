class Solution {
public:
    bool validWordAbbreviation(string word, string abbr) {
        int i=0;
        int j=0;
        int abbr_tot_num = 0;

        while(i<word.size() || j<abbr.size())
        {
            if(isdigit(abbr[j]))
            {
                if(abbr[j]=='0')    // first '0'
                {
                    return false;
                }

                int abbr_num=0;
                while(isdigit(abbr[j]))
                {
                    abbr_num = abbr_num*10 + abbr[j] - '0';
                    j++;
                    // abbr_tot_num++;
                }
                i += (abbr_num);
                abbr_tot_num+=(abbr_num);
                

            }
            else    // abbr[j] == char
            {
                if(abbr[j] == word[i])
                {
                    j++;
                    i++;

                    abbr_tot_num++;
                }
                else
                {
                    return false;
                }

            }
        }
        
        cout << "i: " << i << "      " <<"abbr_tot_num: " << abbr_tot_num;
        if(word.size() == abbr_tot_num)
        {
            return true;
        }
        else
        {
            return false;
        }
        // return true;
        
    }
};