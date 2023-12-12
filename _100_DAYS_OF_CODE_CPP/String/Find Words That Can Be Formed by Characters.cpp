
//https://leetcode.com/problems/find-words-that-can-be-formed-by-characters/submissions/1110977594/?envType=daily-question&envId=2023-12-02

class Solution {
public:

    bool check(string word,vector<int>main){
        vector<int>nums(26,0);
        for(int i=0;i<word.size();i++){
            nums[word[i]-'a']++;
            if(nums[word[i]-'a']>main[word[i]-'a']) return false;
        }
        return true;
    }

    int countCharacters(vector<string>& words, string chars) {
        long long ans=0;
        vector<int>main(26,0);
        for(int i=0;i<chars.size();i++) main[chars[i]-'a']++;
        for(int i=0;i<words.size();i++){
            if(check(words[i],main)) ans+=words[i].size();
        }
        return ans;
    }
};
