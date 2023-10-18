
//https://leetcode.com/problems/search-a-2d-matrix/submissions/1075760095/

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows=matrix.size(),cols=matrix[0].size(),start=0,end=rows*cols-1;
        while(start<=end){
            int mid=start+(end-start)/2,row=mid/cols,col=mid%cols;
            if(matrix[row][col]==target) return true;
            else if(matrix[row][col]>target) end=mid-1;
            else start=mid+1;
        }
        return false;
    }
};
