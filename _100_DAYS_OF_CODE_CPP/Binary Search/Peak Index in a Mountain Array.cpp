
//https://leetcode.com/problems/peak-index-in-a-mountain-array/submissions/1075660359/

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& nums) {
        int start=0,end=nums.size()-1;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(nums[mid]>nums[mid+1]){
                if(nums[mid]>nums[mid-1]) return mid;
                else end=mid-1;
            }
            else if(nums[mid]<nums[mid+1]) start=mid+1;
        }
        return 0;
    }
};
