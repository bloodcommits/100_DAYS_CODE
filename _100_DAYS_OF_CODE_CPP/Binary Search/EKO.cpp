
//https://www.spoj.com/status/ns=32063775

// SPOJ submission 32063775 (CPP14) plaintext list. Status: AC, problem EKO, contest SPOJ. By sudhanshu_22 (Sudhanshu Sharma), 2023-10-22 21:17:49.
#include <bits/stdc++.h>
using namespace std;
 
long long int bs(long long int N,long long int M,vector<long long int>nums){
	sort(nums.begin(),nums.end());
	long long int ans=INT_MAX,start=0,end=nums[N-1];
	while(start<=end){
		long long int mid=start+(end-start)/2,temp=0;
		for(int i=0;i<N;i++){
			if(nums[i]<mid){
				continue;
			}
			else{
				temp+=nums[i]-mid;
			}
		}
		
		if(temp>=M){ 
			start=mid+1;
			ans=mid;
		}
		else end=mid-1;
		if(temp==M) return mid;
	}
	return ans;
}
 
int main() {
	long long int N,M;
	cin>>N>>M;
	vector<long long int>nums(N);
	for(int i=0;i<N;i++) cin>>nums[i];
	long long int ans=bs(N,M,nums);
	cout<<ans;
	return 0;
} 
