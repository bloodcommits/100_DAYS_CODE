
//https://practice.geeksforgeeks.org/problems/frequency-game/1

class Solution{
public:
    int LargButMinFreq(int arr[], int n) {
        map<int,int>mp;
        int mini=INT_MAX;
        for(int i=0;i<n;i++){
            mp[arr[i]]++;
        }
        for(auto x:mp){
            if(x.second < mini) mini=x.second;
        }
        long long ans=0;
        for(auto x:mp){
            if(x.second==mini) ans=x.first;
        }
        return ans;
    }
};
