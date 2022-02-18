class Solution {
public:
    bool isValid(string s) {
        stack<char> check;

        int i;

        for(i=0;i<s.size();i++)
        {
            if(s[i]=='('||s[i]=='{'||s[i]=='[')
                check.push(s[i]);
            else if(s[i]==')')
            {
                if(!check.empty() && check.top()=='(')
                {
                    check.pop();
                }
                else
                {
                    return false;
                }
            }
            else if(s[i]=='}')
            {
                if(!check.empty() && check.top()=='{')
                {
                    check.pop();
                }
                else
                {
                    return false;
                }
            }
            else if(s[i]==']')
            {
                 if(!check.empty() && check.top()=='[')
                {
                    check.pop();
                }
                else
                {
                    return false;
                }
            }
        }
        if(check.empty())
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
