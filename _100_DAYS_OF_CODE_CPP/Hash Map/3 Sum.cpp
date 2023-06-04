
//https://leetcode.com/problems/3sum/submissions/962315094/

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        map<vector<int>,int>mp;
        // for(int i=0;i<nums.size();i++) mp[nums[i]]=i;
        for(int i=0;i<nums.size();i++){
            int j=i+1,k=nums.size()-1;
            while(j<k){
                long long sum=nums[i]+nums[j]+nums[k];
                if(sum==0){
                    mp[{nums[i],nums[j],nums[k]}];
                    j++,k--;
                }
                else if(sum<0) j++;
                else k--;
            }
        }
        for(auto x:mp) ans.push_back(x.first);
        return ans;
    }
};
