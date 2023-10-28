
//https://leetcode.com/problems/minimum-time-difference/submissions/1083214736/

class Solution {
public:
    int findMinDifference(vector<string>& nums) {
        vector<int>minute;
        for(int i=0;i<nums.size();i++){
            string temp=nums[i];
            int hour=stoi(temp.substr(0,2));
            int minutes=stoi(temp.substr(3,2));
            minute.push_back(((hour*60)+minutes));
        }
        sort(minute.begin(),minute.end());
        int ans=INT_MAX;
        for(int i=0;i<minute.size()-1;i++){
            cout<<minute[i]<<" "<<minute[i+1]<<endl;
            int diff=abs(minute[i]-minute[i+1]);
            ans=min(ans,diff);
        }
        ans=min(ans,(minute[0]+1440)-minute[minute.size()-1]);
        return ans;
    }
};
