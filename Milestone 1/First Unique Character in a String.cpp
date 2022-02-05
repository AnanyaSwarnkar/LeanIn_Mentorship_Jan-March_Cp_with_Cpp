class Solution {
public:
    int firstUniqChar(string s) 
    {
        int count[200] = {0};
        for(char i : s)
        {
            count[i]++;    
        }
        for(int i = 0; i < s.length(); i++) 
        {
            if(count[s[i]] == 1) 
                return i;
        }
        
        return -1;
    }
};
