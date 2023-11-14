
//https://leetcode.com/problems/zigzag-conversion/submissions/1098816746/

class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows==1) return s;
        vector<string>strs(numRows);
        int row=0,i=0;
        bool up_n_down=1;
        while(true){
            if(up_n_down){
                while(row<numRows && i<s.size()){
                    strs[row++].push_back(s[i++]);
                }
                row=row-2;
            }
            else{
                while(row>=0 && i<s.size()){
                    strs[row--].push_back(s[i++]);
                }
                row=1;
            }
            if(i>=s.size()) break;
            up_n_down=!up_n_down;
        }
        string ans="";
        for(int i=0;i<strs.size();i++) ans+=strs[i];
        return ans;
    }
};
