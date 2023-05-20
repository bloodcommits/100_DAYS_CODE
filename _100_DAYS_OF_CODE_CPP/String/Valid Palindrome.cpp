
//https://leetcode.com/problems/valid-palindrome/submissions/953864127/

class Solution {
public:
    bool isPalindrome(string s) {
        // if(s[0]==' '){
        //     int i=0;
        //     while(s[i]==' '){
        //         s.erase(s.begin());
        //         i++;
        //     }
        // }
        // if(s[s.size()-1]==' '){
        //     int j=s.size()-1;
        //     while(s[j]==' '){
        //         s.erase(s.begin()+s.size()-1);
        //         j--;
        //     }
        // }
        string str="";
        for(int i=0;i<s.size();i++){
            if(iswalnum(s[i])){
                str+=tolower(s[i]);
            }
        }
        for(int i=0;i<str.size()/2;i++){
            if(str[i]!=str[str.size()-i-1]) return false;
        }
        return true;
    }
};
