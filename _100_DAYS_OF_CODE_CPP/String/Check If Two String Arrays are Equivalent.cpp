
//https://leetcode.com/problems/check-if-two-string-arrays-are-equivalent/submissions/1110373700/?envType=daily-question&envId=2023-12-01

class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string str1,str2;
        for(int i=0;i<word1.size();i++){
            str1+=word1[i];
        }
        for(int i=0;i<word2.size();i++){
            str2+=word2[i];
        }
        return str1==str2?true:false;
    }
};
