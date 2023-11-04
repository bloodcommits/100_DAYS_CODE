
//https://leetcode.com/problems/string-to-integer-atoi/submissions/1091108132/

class Solution {
public:
    int myAtoi(string s) {
        int num=0,i=0,sign=1;
        while(s[i]==' ') i++;
        if(s[i]=='+' || s[i]=='-'){
            s[i]=='-'?sign=-1:sign=1;
            i++;
        }
        while(i<s.size() && isdigit(s[i])){
            if(num>INT_MAX/10 || (num==INT_MAX/10 && s[i]>'7')) return sign==1?INT_MAX:INT_MIN;
            num=num*10+(s[i]-'0');
            i++;
        }
        return num*sign;
    }
};
