
//https://leetcode.com/problems/remove-all-occurrences-of-a-substring/submissions/1083034913/

class Solution {
public:
    string removeOccurrences(string s, string part) {
        int index=s.find(part);
        while(index!=string::npos){
            s.erase(index,part.size());
            index=s.find(part);
        }
        return s;
    }
};
