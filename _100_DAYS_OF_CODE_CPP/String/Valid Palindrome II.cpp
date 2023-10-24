
//https://leetcode.com/problems/valid-palindrome-ii/submissions/1083182599/

class Solution {
public:

    bool palindrome(string str,int index){
        str.erase(index,1);
        cout<<str<<" ";
        for(int i=0,j=str.size()-1;i<=j;i++,j--){
            if(str[i]!=str[j]) return false;
        }
        return true;
    }

    bool validPalindrome(string s) {
        int count=0;
        for(int i=0,j=s.size()-1;i<=j;i++,j--){
            if(s[i]!=s[j]){
                if(palindrome(s,i) || palindrome(s,j)){
                    return true;
                    // count++;
                    // if(count>1) return false;
                    // continue;
                }
                else return false;
            }
        }
        return true;
    }
};
