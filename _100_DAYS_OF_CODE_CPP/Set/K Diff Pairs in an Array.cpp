
//https://leetcode.com/problems/k-diff-pairs-in-an-array/submissions/1076062095/

class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        set<vector<int>>s;
        vector<vector<int>>pair;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(abs(nums[i]-nums[j])==k){
                    pair.push_back({nums[i],nums[j]});
                }
            }
        }
        for(auto i:pair){
            s.insert(i);
        }
        return s.size();
    }
};
