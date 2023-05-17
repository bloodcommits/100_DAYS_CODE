
//https://practice.geeksforgeeks.org/problems/trace-path3840/1

class Solution{
public:
    int isPossible(int n, int m, string s){
        int row=0,col=0,left=0,right=0,up=0,down=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='L')col--;
            else if(s[i]=='R')col++;
            else if(s[i]=='U')row++;
            else if(s[i]=='D')row--;
            left=min(left,col);
            right=max(right,col);
            up=max(up,row);
            down=min(down,row);
        }
        if(right-left<m && up-down<n) return 1;
        return 0;
    }
};
