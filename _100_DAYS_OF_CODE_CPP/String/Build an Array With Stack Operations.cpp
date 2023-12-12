
//https://leetcode.com/problems/build-an-array-with-stack-operations/submissions/1090783743/?envType=daily-question&envId=2023-11-03

class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string>strs;
        int index=0,max=target[target.size()-1];
        for(int i=1;i<=max;i++){
            if(i==target[index]){
                strs.push_back("Push");
                index++;
            }
            else{
                strs.push_back("Push");
                strs.push_back("Pop");
            }
        }
        return strs;
    }
};
