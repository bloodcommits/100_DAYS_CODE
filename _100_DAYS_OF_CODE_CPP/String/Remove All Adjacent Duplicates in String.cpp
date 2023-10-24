
//https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string/submissions/1082810266/

class Solution {
public:
    string removeDuplicates(string s) {
        string ans="";
        for(int i=0;i<s.size();i++){
            if(ans.size()>0){
                if(ans.back()==s[i]) ans.pop_back();
                else ans.push_back(s[i]);
            }
            else ans.push_back(s[i]);
        }
        return ans;
    }
};
