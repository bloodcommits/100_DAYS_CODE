
//https://leetcode.com/problems/divide-two-integers/submissions/1080092455/

class Solution {
public:

    int bs_quo(int n,int divisor){
        if(divisor==1) return n;
        if(n==INT_MIN && divisor==-1) return INT_MAX;
        long start=0,end=abs(n);
        long ans=0;
        while(start<=end){
            long mid=start+(end-start)/2;
            if(abs(mid*divisor)==abs(n)){
                ans=mid;
                break;
            }
            else if(abs(mid*divisor) > abs(n)) end=mid-1;
            else{
                ans=mid;
                start=mid+1;
            }
        }
        if((divisor>0 && n>0)||(divisor<0 && n<0)) return int(ans);
        ans=ans*-1;
        return int(ans);
    }

    int divide(int dividend, int divisor) {
        return bs_quo(dividend,divisor);
    }
};
