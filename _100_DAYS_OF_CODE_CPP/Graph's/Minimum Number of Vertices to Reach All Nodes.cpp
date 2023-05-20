
//https://leetcode.com/problems/minimum-number-of-vertices-to-reach-all-nodes/submissions/952751691/

class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
        vector<int>check(n,0);
        for(auto x:edges){
            check[x[1]]++;
            // cout<<x[0]<<" "<<x[1]<<endl;
        }
        vector<int>ans;
        for(int i=0;i<n;i++) if(check[i]==0) ans.push_back(i);
        check.clear();
        return ans;
    }
};
