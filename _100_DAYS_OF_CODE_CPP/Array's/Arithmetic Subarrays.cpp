
//https://leetcode.com/problems/arithmetic-subarrays/submissions/1104994102/?envType=daily-question&envId=2023-11-23

class Solution {
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        vector<bool>ans;
        for(int i=0;i<l.size();i++){
            vector<int>temp;
            temp.insert(temp.begin(),nums.begin()+l[i],nums.begin()+r[i]+1);
            sort(temp.begin(),temp.end());
            if(temp.size()<2){
                ans.push_back(true);
                continue;
            }
            // for(int x:temp) cout<<x<<" ";
            // cout<<endl;
            int tmp=temp[1]-temp[0];
            cout<<tmp<<" ";
            bool flag=1;
            for(int j=2;j<temp.size();j++){
                if(temp[j]-temp[j-1]!=tmp){
                    ans.push_back(false);
                    flag=0;
                    break;
                }
            }
            if(flag) ans.push_back(true);
        }
        return ans;
    }
};
