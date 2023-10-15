
//https://practice.geeksforgeeks.org/problems/first-repeating-element4018/1

class Solution {
  public:
    // Function to return the position of the first repeating element.
    int firstRepeated(int nums[], int n) {
        map<int,int>mp;
        for(int i=0;i<n;i++) mp[nums[i]]++;
        for(int i=0;i<n;i++) if(mp[nums[i]]>1) return ++i;
        return -1;
    }
};
