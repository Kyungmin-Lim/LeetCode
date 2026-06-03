class Solution {
public:
    int numDecodings(string s) {
        if(s[0]=='0')
        {
            return 0;
        }
        if(s.size()==1)
        {
            return 1;
        }
        int prev2=1;
        int prev1=1;
        int curr=0;

        for(int i=1; i<s.size(); i++)
        {
            curr=0;
            if(s[i]>='1'&&s[i]<='9')
            {
                curr+=prev1;
            }
            if(s.substr(i-1, 2)<="26" && s.substr(i-1, 2)>="10")
            {
                curr+=prev2;
            }

            if(curr==0)
            {
                return 0;
            }

            prev2=prev1;
            prev1=curr;
            
        }
        return curr;       
        
    }
};