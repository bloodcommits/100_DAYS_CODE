
//https://leetcode.com/problems/min-cost-climbing-stairs/submissions/1101557731/?envType=daily-question&envId=2023-10-13

class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        for(int i=2;i<cost.size();i++) cost[i]+=min(cost[i-1],cost[i-2]);
        return min(cost[cost.size()-1],cost[cost.size()-2]);
    }
};
