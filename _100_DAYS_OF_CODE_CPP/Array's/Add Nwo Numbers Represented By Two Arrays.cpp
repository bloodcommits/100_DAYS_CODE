
//https://practice.geeksforgeeks.org/problems/add-two-numbers-represented-by-two-arrays2408/1

class Solution{
    public:
    string calc_Sum(int *nums1,int n,int *nums2,int m){
        string ans="";
        int carry=0,i=n-1,j=m-1;
        while(i>=0 && j>=0){
            int sum=nums1[i]+nums2[j]+carry;
            int num=sum%10;
            carry=sum/10;
            ans.push_back(num+'0');
            i--,j--;
        }
        while(i>=0){
            int sum=nums1[i]+carry;
            int num=sum%10;
            carry=sum/10;
            ans.push_back(num+'0');
            i--;
        }
        while(j>=0){
            int sum=nums2[j]+carry;
            int num=sum%10;
            carry=sum/10;
            ans.push_back(num+'0');
            j--;
        }
        if(carry) ans.push_back(carry+'0');
        
        while(ans[ans.size()-1]=='0') ans.pop_back();
        
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
