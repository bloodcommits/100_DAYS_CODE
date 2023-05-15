
//https://practice.geeksforgeeks.org/problems/1132bd8ee92072cd31441858402641d6800fa6b3/1

  public:
    long long countBits(long long N) {
        long long ans=0;
        for(int i=1;i<=N;i++){
            ans+=__builtin_popcount(i);
        }
        return ans;
    }
};
