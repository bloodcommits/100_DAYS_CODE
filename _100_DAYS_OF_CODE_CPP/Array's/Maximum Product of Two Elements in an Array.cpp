
//https://leetcode.com/problems/maximum-product-of-two-elements-in-an-array/submissions/1118253262/?envType=daily-question&envId=2023-12-12

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        long long ans=0;
        for(int i=0;i<nums.size();i++) for(int j=i+1;j<nums.size();j++) if((nums[i]-1)*(nums[j]-1)>ans) ans=(nums[i]-1)*(nums[j]-1);
        return ans;
    }
};
