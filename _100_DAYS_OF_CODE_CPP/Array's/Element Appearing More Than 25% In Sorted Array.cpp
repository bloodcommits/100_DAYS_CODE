
//https://leetcode.com/problems/element-appearing-more-than-25-in-sorted-array/submissions/1117421709/?envType=daily-question&envId=2023-12-11

class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        // float percent=arr.size()*0.25;
        int maxi=INT_MIN,ans=0;
        map<int,int>mp;
        for(int i:arr) mp[i]++;
        for(auto x:mp) if(x.second>=maxi){
            maxi=x.second;
            ans=x.first;
        }
        return ans;
    }
};
