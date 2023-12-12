
//https://leetcode.com/problems/minimize-maximum-pair-sum-in-array/submissions/1100963685/?envType=daily-question&envId=2023-11-17

class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int maxi=INT_MIN;
        for(int i=0,j=nums.size()-1;i<j;i++,j--){
            maxi=max(maxi,nums[i]+nums[j]);
        }
        return maxi;
    }
};
