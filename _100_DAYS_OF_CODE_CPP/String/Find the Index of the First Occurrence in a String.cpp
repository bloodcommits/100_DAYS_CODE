
//https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/submissions/1090061215/

class Solution {
public:
    int strStr(string haystack, string needle) {
        int ans=-1,i=0,j=needle.size();
        while(i+j<=haystack.size()){
            string temp=haystack.substr(i,j);
            cout<<temp<<endl;
            if(temp==needle){
                ans=i;
                break;
            }
            i++;
        }
        return ans;
    }
};
