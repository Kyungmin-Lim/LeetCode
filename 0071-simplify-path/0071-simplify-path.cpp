class Solution {
public:
    string simplifyPath(string path) {
        string result;
        vector<string> st;

        for(int i=0; i<path.size(); i++)
        {
            if(path[i]=='/')
            {
                continue;
            }
            string tmp;
            while(i<path.size() && path[i]!='/')
            {
                tmp += path[i];
                i++;
            }

            if(tmp==".")
            {
                continue;
            }
            if(tmp=="..")
            {
                if(!st.empty())
                {
                    st.pop_back();
                }
            }
            else
            {
                st.push_back(tmp);
            }
            
        } 

        for(auto it:st)
        {
            result = result + "/" + it;
            
        }

        if(result.empty())
        {
            return "/";
        }


        return result;

    }
};