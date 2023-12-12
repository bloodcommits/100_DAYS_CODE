
//https://leetcode.com/problems/transpose-matrix/submissions/1116596573/?envType=daily-question&envId=2023-12-10

class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        // vector<vector<int>>ans(matrix.size(),vector<int>(matrix[0].size()));
        // ans=matrix;
        vector<vector<int>>ans;
        for(int i=0;i<matrix[0].size();i++){
            vector<int>temp;
            for(int j=0;j<matrix.size();j++){
                // ans[](matrix[i][j]);
                temp.push_back(matrix[j][i]);
                cout<<matrix[j][i]<<" ";
                // cout<<ans[i][j]<<" ";
            }
            ans.push_back(temp);
            cout<<endl;
        }
        return ans;
    }
};
