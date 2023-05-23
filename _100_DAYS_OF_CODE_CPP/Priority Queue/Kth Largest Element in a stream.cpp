
//https://leetcode.com/problems/kth-largest-element-in-a-stream/submissions/955777163/

class KthLargest {
public:
    priority_queue<int,vector<int>,greater<int>>p;
    int temp;
    KthLargest(int k, vector<int>& nums) {
        for(int i:nums) p.push(i);
        temp=k;
    }
    
    int add(int val) {
        p.push(val);
        while(p.size()>temp) p.pop();
        return p.top();
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */
