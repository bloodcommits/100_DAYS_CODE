
//https://www.spoj.com/status/ns=32066635

//SPOJ submission 32066635 (CPP14) plaintext list. Status: AC, problem PRATA, contest SPOJ. By sudhanshu_22 (Sudhanshu Sharma), 2023-10-23 12:24:23.
#include <bits/stdc++.h>
using namespace std;
 
bool valid(vector<int>nums,long long int mid,int target){
	int total_prata=0;
	for(int i=0;i<nums.size();i++){
		int j=1,rank=nums[i];
		long long int time=0;
		while(22){
			if(time+rank*j<=mid){
				time+=rank*j;
				total_prata++,j++;
			}
			else break;
		}
		if(total_prata>=target) return true;
	}
	return false;
}
 
int prata(int n,vector<int>nums){
	long long int start=0,max_rank=*max_element(nums.begin(),nums.end()),end=(max_rank)*((n*(n+1))/2);
	int ans=0;
	while(start<=end){
		long long int mid=start+(end-start)/2,temp=0;
		if(valid(nums,mid,n)){
			ans=mid;
			end=mid-1;
		}
		else start=mid+1;
	}
	return ans;
}
 
int main() {
	int t;
	cin>>t;
	while(t--){
		int req,size;
		cin>>req>>size;
		vector<int>rank(size);
		for(int i=0;i<size;i++) cin>>rank[i];
		cout<<prata(req,rank)<<endl;
	}
	return 0;
} 
