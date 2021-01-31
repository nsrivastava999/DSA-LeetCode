class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size(),curr=0;
        // O(n) with two traversals
        // for(int i=0;i<n;i++){
        //     if(nums[i]!=0){
        //         nums[curr++]=nums[i];
        //     }
        // }
        // for(int i=curr;i<n;i++){
        //     nums[i]=0;
        // }
        //O(n) with single traversal
        for(int i=0;i<n;i++){
            if(nums[i]!=0){
                swap(nums[curr++],nums[i]);
            }
        }
    }
};