class Solution {
public:
        int myAtoi(string str) {
    int result = 0;
    int sign = 1;
    int length = str.length();
    int i=0;
    for(;i<length && !(str[i] >= '0' && str[i] <= '9');i++)
    {
        if(str[i]!=' '){
            if(str[i] == '-'){
                sign=-1;
                i++;
                break;
            }
            if(str[i] == '+'){
                i++;
                break;
            }
            return 0;
        }
    }
    
    
    for(;i<length;i++){
        if(str[i] < '0' || str[i] > '9')
            break;
        int x = (str[i] - 48)*sign;
        if(result > INT_MAX/10 || (result == INT_MAX/10 && x > INT_MAX % 10))
            return INT_MAX;
        else if(result < INT_MIN/10 || (result == INT_MIN/10 && x < INT_MIN%10))
            return INT_MIN;

        result = result*10 + x;
    }
    
    
    return result; 
    }
};
