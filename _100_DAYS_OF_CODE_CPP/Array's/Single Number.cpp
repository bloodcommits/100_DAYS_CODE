
//https://leetcode.com/problems/single-number/submissions/952842457/

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int num=nums[0];
        for(int i=1;i<nums.size();i++){
            if(nums[i-1]==nums[i]){
                if(nums[i]==nums[i+1]) i++;
            }
            else if(i==1 && nums[i-1]!=nums[i]) break;
            else if(i<nums.size()-1 && nums[i]==nums[i+1]) ++i;
            else if(i<nums.size()-1 && nums[i]!=nums[i-1] && nums[i]!=nums[i+1]){
                num=nums[i];
                break;
            }
            else if(i==nums.size()-1 && nums[i]!=nums[i-1]) num=nums[i];
            else if(nums[i-1]!=nums[i] && nums[i]!=nums[i+1]){
                num=nums[i];
                break;
            }
            cout<<i<<" ";
        }
        return num;
    }
};
