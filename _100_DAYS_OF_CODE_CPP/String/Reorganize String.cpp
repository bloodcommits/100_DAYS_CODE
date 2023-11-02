
//https://leetcode.com/problems/reorganize-string/submissions/1089334249/

class Solution {
public:
    string reorganizeString(string s) {
        map<char,int>mp;
        for(char ch:s) mp[ch]++;
        int max=0;
        // for(auto x:mp) if(x.second>max) max=x.second;
        char ch=0;
        for(auto x:mp){
            if(x.second>max){
                max=x.second;
                ch=x.first;
                // cout<<x.first;
            }
        }
        mp[ch]=0;
        int i=0;
        while(max--){
            if(i>=s.size()) return "";
            s[i]=ch;
            i+=2;
        }
        for(auto x:mp){
            while(x.second--){
                if(i>=s.size()) i=1;
                s[i]=x.first;
                i+=2;
            }
        }
        return s;
    }
};
