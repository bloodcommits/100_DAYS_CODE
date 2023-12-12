
//https://leetcode.com/problems/maximum-number-of-coins-you-can-get/submissions/1105639403/?envType=daily-question&envId=2023-11-24

class Solution {
public:
    int maxCoins(vector<int>& piles) {
        long long ans=0;
        sort(piles.begin(),piles.end());
        for(int i=0,j=piles.size()-2,k=piles.size()-1;i<j;i++,j-=2,k=j+1) ans+=piles[j];
        return ans;
    }
};
