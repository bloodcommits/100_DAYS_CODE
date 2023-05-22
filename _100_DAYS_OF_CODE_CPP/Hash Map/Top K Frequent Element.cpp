
//https://leetcode.com/problems/top-k-frequent-elements/submissions/955257110/

class Solution {
public:
    void sort(map<int, int>& M){
    multimap<int, int> MM;
    for (auto& it : M) {
        MM.insert({ it.second, it.first });
    }
    // for (auto& it : MM) {
    //     cout << it.second << ' ' << it.first << endl;
    // }
}

    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int>mp;
        for(int i:nums) mp[i]++;
        vector<int>ans;
        // sort(mp);
        // int index=0;
        priority_queue<pair<int,int>>p;
        for(auto x:mp) p.push({x.second,x.first});
        while(k--){
            ans.push_back(p.top().second);
            p.pop();
        }
        return ans;
    }
};
