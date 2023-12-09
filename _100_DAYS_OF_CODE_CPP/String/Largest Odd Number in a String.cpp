
//https://leetcode.com/problems/largest-odd-number-in-string/submissions/1115882844/?envType=daily-question&envId=2023-12-07

class Solution {
public:
    string largestOddNumber(string num) {
        string ans="";
        for(int i=num.size()-1;i>=0;i--){
            int temp=num[i]-'0';
            cout<<temp<<" ";
            if(temp%2!=0){
                ans=num.substr(0,i+1);
                cout<<ans<<endl;
                break;
            }
        }
        return ans;
    }
};
