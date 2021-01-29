class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int res=-1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=val){
                res++;
                nums[res]=nums[i];
            }
        }
        return res+1;
    }
};