
//https://www.codingninjas.com/studio/problems/missing-and-repeating-numbers_873366?leftPanelTab=1

#include <bits/stdc++.h>

pair<int,int> missingAndRepeating(vector<int> &nums, int n)
{
	int M=-1,R=-1;
	for(int i=0;i<nums.size();i++){
		int index=abs(nums[i])-1;
		if(nums[index]>0) nums[index]*=-1;
		else if(nums[index]<0) R=index+1;
	}
	for(int i=0;i<nums.size();i++){
		if(nums[i]>0){
			// R=nums[i];
			M=i+1;
		}
	}
	return {M,R};
}
