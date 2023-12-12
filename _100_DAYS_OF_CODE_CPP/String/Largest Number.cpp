
//https://leetcode.com/problems/largest-number/submissions/1098083614/

class Solution {
public:

    static bool comp(string a,string b){
        string tmp1=a+b,tmp2=b+a;
        return tmp1>tmp2;
    }

    string largestNumber(vector<int>& nums) {
        vector<string>strs;
        for(auto s:nums) strs.push_back(to_string(s));
        sort(strs.begin(),strs.end(),comp);
        string ans="";
        for(auto s:strs) ans+=s;
        if(ans[0]=='0') return "0";
        return ans;
    }
};
