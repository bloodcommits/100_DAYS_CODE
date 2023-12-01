
//https://leetcode.com/problems/reduction-operations-to-make-the-array-elements-equal/submissions/1102223215/?envType=daily-question&envId=2023-11-19

class Solution {
public:
    int reductionOperations(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int count=0,temp=0;
        for(int i=1;i<nums.size();i++){
            if(nums[i]!=nums[i-1]) temp++;
            count+=temp;
            cout<<count<<" "<<temp<<endl;
        }
        return count;
    }
};
