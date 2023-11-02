
//https://leetcode.com/problems/longest-common-prefix/submissions/1087763057/

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans="";
        int index=0;
        while(true){
            char temp=0;
            for(int j=0;j<strs.size();j++){
                string s=strs[j];
                if(index>=s.size()){
                    temp=0;
                    break;
                }
                if(temp==0) temp=s[index];
                else if(temp!=s[index]){
                    temp=0;
                    break;
                }
            }
            if(temp==0) break;
            ans.push_back(temp);
            index++;
        }
        return ans;
    }
};
