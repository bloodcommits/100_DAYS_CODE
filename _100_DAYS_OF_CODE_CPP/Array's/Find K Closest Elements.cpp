
//https://leetcode.com/problems/find-k-closest-elements/submissions/1076529941/

class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        vector<int>ans;
        int low=0,high=arr.size()-1;
        while(high-low>=k){
            if(arr[high]-x>=x-arr[low]) high--;
            else low++;
        }
        for(int i=low;i<=high;i++) ans.push_back(arr[i]);
        return ans;
    }
};
