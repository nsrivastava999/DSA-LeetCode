class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        //Using FLoyd's Tortoise and Hare Cycle Detection, same as linked list loop starting point
        if(nums.size()>1){
            int slow = nums[0];
            int fast = nums[nums[0]];
            while(slow!=fast){
                slow=nums[slow];
                fast=nums[nums[fast]];
            }
            slow=0;
            while(slow!=fast){
                slow=nums[slow];
                fast=nums[fast];
            }
            return slow;
        }
        return -1;
    }
};