
//https://leetcode.com/problems/minimum-time-visiting-all-points/submissions/?envType=daily-question&envId=2023-12-03

class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        long long ans=0;
        for(int i=1;i<points.size();i++) ans+=max(abs(points[i][1]-points[i-1][1]),abs(points[i][0]-points[i-1][0]));
        return ans;
    }
};
