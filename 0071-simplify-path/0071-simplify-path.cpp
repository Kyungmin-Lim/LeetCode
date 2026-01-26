class Solution {
public:
    string simplifyPath(string path) {
        string result;
        stack<string> st;

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
                    st.pop();
                }
            }
            else
            {
                st.push(tmp);
            }
            
        } 

        while(!st.empty())
        {
            result = "/" + st.top() + result;
            st.pop();
        }

        if(result.size()==0)
        {
            return "/";
        }


        return result;

    }
};