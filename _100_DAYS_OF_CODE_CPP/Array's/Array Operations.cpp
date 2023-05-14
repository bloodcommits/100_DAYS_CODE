
//https://practice.geeksforgeeks.org/problems/3a93b6a25a7b88e4c80a1fee00898fd8022eb108/1

class Solution {
  public:
    int arrayOperations(int n, vector<int> &arr) {
        int flag=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]==0){
                flag=1;
                break;
            }
        }
        if(flag==0) return -1;
        long long count=0,temp=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]!=0) temp++;
            else{
                if(temp!=0){
                    count++;
                }
                temp=0;
            }
        }
        if(temp!=0) count++;
        return count;
    }
};
