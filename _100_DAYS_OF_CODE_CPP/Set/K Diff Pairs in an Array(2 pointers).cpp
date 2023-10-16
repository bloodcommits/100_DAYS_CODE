
//https://leetcode.com/problems/k-diff-pairs-in-an-array/submissions/1076077158/

class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        set<pair<int,int>>s;
        sort(nums.begin(),nums.end());
        for(int i=0,j=1;j<nums.size();){
            if(nums[j]-nums[i]==k){
                s.insert({nums[j],nums[i]});
                ++i,++j;
            }
            else if(nums[j]-nums[i]>k) i++;
            else j++;
            if(i==j) j++;
        }
        return s.size();
    }
};
