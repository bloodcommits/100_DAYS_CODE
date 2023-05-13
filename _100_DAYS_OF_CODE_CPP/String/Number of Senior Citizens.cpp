
//https://leetcode.com/problems/number-of-senior-citizens/submissions/949626664/

class Solution {
public:
    int countSeniors(vector<string>& details) {
        long long ans=0;
        for(string s:details){
            string str="";
            str+=s[11];
            str+=s[12];
            cout<<str<<" ";
            if(str[0]>'6'){
                // cout<<str[1]<<endl;
                if(str[1]>='0'){ 
                    cout<<str[1]<<endl;
                    ans++;
                }
            }
            else if(str[0]=='6'){
                if(str[1]>'0') ans++;
            }
        }
        return ans;
    }
};
