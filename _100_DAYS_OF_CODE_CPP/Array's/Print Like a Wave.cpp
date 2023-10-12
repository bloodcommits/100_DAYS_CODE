
//https://www.codingninjas.com/studio/problems/print-like-a-wave_893268

#include <bits/stdc++.h> 
vector<int> wavePrint(vector<vector<int>> nums, int nRows, int mCols)
{
    vector<int>ans;
    for(int i=0;i<nums[0].size();i++){
        if(i%2==0){
            for(int j=0;j<nums.size();j++){
                ans.push_back(nums[j][i]);
            }
        }
        else{
            for(int j=nums.size()-1;j>=0;j--){
                ans.push_back(nums[j][i]);
            }
        }
    }
    return ans;
}
