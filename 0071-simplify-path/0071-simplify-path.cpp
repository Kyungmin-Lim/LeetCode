class Solution {
public:
    string simplifyPath(string path) {
        int num = path.size();
        stack<string> name;
        

        for(int i=0; i<num; i++)
        {

            if(path[i] == '/')
            {
                continue;
            }            
            else
            {
                string tmp;
                while((path[i]!='/') && (i<num))
                {
                    tmp += path[i++];
                }

                if(tmp == "..")
                {
                    if(!name.empty())
                    {
                        name.pop();
                    }
                    else
                    {
                        continue;
                    }
                }
                else if(tmp==".")
                {
                    continue;
                }
                else
                {
                    name.push(tmp);
                }
            }
        }
        int dst_num = name.size();
        string dst;


        for(int i=0; i<dst_num; i++)
        {
            dst = "/" + name.top() + dst;
            name.pop();
            
        }
        if(dst_num==0)
        {
            dst = "/";
        }

        
        return dst;

        
    }
};