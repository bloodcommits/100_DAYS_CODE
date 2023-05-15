
//https://leetcode.com/problems/maximum-points-you-can-obtain-from-cards/submissions/950951630/

class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        long long sum=0;
        for(int i=0;i<k;i++) sum+=cardPoints[i];
        long long temp=sum;
        int ind=1;
        for(int i=k-1;i>=0;i--){
            temp-=cardPoints[i];
            temp+=cardPoints[cardPoints.size()-ind];
            ind++;
            sum=max(sum,temp);
        }
        return sum;
    }
};
