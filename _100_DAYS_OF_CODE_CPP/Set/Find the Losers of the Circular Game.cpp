
//https://leetcode.com/problems/find-the-losers-of-the-circular-game/submissions/949940009/

class Solution {
public:
    vector<int> circularGameLosers(int n, int k) {
        vector<int>nums;
        for(int i=1;i<=n;i++) nums.push_back(i);
        set<int>s;
        int flag=1,index=0,i=1;
        while(flag){
            // int temp=(i*nums[index])%n;
            if(s.find(nums[index])!=s.end()) break;
            else s.insert(nums[index]);
            cout<<index<<" ";
            index+=(i*k);
            index=index%n;
            i++;
        }
        cout<<endl;
        vector<int>ans;
        for(int i=1;i<=n;i++){
            if(s.find(i)==s.end()) ans.push_back(i);
        }
        return ans;
    }
};
