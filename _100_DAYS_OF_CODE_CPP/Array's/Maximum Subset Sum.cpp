
//https://practice.geeksforgeeks.org/problems/e047b92794316450814b29de56cc9c6ec18371b7/1

class Solution {

  public:
    long long findMaxSubsetSum(int N, vector<int> &A) {
        long long temp1=A[0],temp2=A[1]+max(0,A[0]);
        for(long long temp=0,i=2;i<A.size();i++) temp=max(temp1,temp2)+A[i],temp1=temp2,temp2=temp;
        return max(temp1,temp2);
    }
};
