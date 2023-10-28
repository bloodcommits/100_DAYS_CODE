
//https://leetcode.com/problems/palindromic-substrings/submissions/1083804693/

class Solution {
public:
    int countSubstrings(string s) {
        int count=0,start=0,end=0;
        int size=s.size();
        while(size--){
            int i=start,j=end;
            while(i>=0 && j<s.size()){
                if(s[i]==s[j]){
                    count++;
                    i--;
                    j++;
                }
                else break;
            }
            start++,end++;
        }
        size=s.size()-1;
        start=0,end=0;
        while(size--){
            int i=start,j=end+1;
            while(i>=0 && j<s.size()){
                if(s[i]==s[j]){
                    count++;
                    i--;
                    j++;
                }
                else break;
            }
            start++,end++;
        }
        return count;
    }
};
