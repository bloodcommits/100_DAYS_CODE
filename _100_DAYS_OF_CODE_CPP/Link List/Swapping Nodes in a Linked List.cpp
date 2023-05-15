
//https://leetcode.com/problems/swapping-nodes-in-a-linked-list/submissions/950797320/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<int>nums;
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* temp=head;
        while(temp!=NULL){
            nums.push_back(temp->val);
            temp=temp->next;
        }
        int tmp=nums[k-1];
        nums[k-1]=nums[(nums.size())-k];
        nums[(nums.size())-k]=tmp;
        ListNode* tp=new ListNode(0);
        ListNode* ans=tp;
        ListNode* answer=ans;
        for(int i=0;i<nums.size();i++){
            tp=new ListNode(nums[i]);
            ans->next=tp;
            ans=ans->next;
        }
        return answer->next;
    }
};
