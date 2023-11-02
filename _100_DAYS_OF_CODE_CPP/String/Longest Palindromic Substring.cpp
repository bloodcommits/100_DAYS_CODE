
//https://leetcode.com/problems/longest-palindromic-substring/submissions/1090051337/

class Solution {
public:

    bool palindrome(string&s,int i,int j){
        while(i<j){
            if(s[i]!=s[j]) return false;
            i++,j--;
        }
        return true;
    }

    string longestPalindrome(string s) {
        string ans="";
        for(int i=0;i<s.size();i++){
            for(int j=i;j<s.size();j++){
                if(palindrome(s,i,j)){
                    string temp=s.substr(i,j-i+1);
                    if(temp.size()>ans.size()) ans=temp;
                }
            }
        }
        return ans;
    }
};
