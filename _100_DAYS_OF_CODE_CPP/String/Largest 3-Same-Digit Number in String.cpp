
//https://leetcode.com/problems/largest-3-same-digit-number-in-string/submissions/1112352198/?envType=daily-question&envId=2023-12-04

class Solution {
public:
    string largestGoodInteger(string num) {
        int maxi=INT_MIN;
        for(int i=0,j=i+1,k=j+1;i<num.size()-2;i++,j++,k++){
            cout<<num[i]<<" "<<num[j]<<" "<<num[k]<<endl;
            if(num[i]==num[j] && num[i]==num[k]){
                string temp="";
                temp+=num[i];
                temp+=num[j];
                temp+=num[k];
                i+=2;
                j+=2;
                k+=2;
                // cout<<temp<<" ";
                int number=stoi(temp);
                // cout<<number<<" ";
                maxi=max(maxi,number);
            }
        }
        if(maxi==0) return "000";
        return (maxi!=INT_MIN)?to_string(maxi):"";
    }
};
