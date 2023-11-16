
//https://leetcode.com/problems/find-unique-binary-string/submissions/1100265485/?envType=daily-question&envId=2023-11-16

class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {
        string ans="";
        int index=0;
        for(string s:nums){
            ans=ans+to_string('1'-s[index]);
            cout<<ans<<endl;
            index++;
        }
        return ans;
    }
};
