
//https://practice.geeksforgeeks.org/problems/allocate-minimum-number-of-pages0937/1

//User function template in C++

class Solution 
{
    public:
    
    bool is_valid(int A[],int N,int M,int predicted){
        int sum=0,count=1;
        for(int i=0;i<N;i++){
            if(A[i]>predicted) return false;
            else if(sum+A[i]>predicted){
                count++;
                sum=A[i];
                if(count>M) return false;
            }
            else sum+=A[i];
        }
        return true;
    }
    
    //Function to find minimum number of pages.
    int findPages(int A[], int N, int M) 
    {
        if(M>N) return -1;
        int start=0,end=accumulate(A,A+N,0),ans=-1;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(is_valid(A,N,M,mid)){
                ans=mid;
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }
        return ans;
    }
};
