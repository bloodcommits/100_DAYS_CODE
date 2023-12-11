
//https://leetcode.com/problems/element-appearing-more-than-25-in-sorted-array/submissions/1117425031/?envType=daily-question&envId=2023-12-11

class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        float percent=arr.size()*0.25;
        map<int,int>mp;
        for(int i:arr) mp[i]++;
        for(auto x:mp) if(x.second>percent) return x.first;
        return 0;
    }
};
