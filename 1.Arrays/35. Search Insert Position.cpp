class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n=nums.size();
        int left=0, right=n-1;
        while(left<=right)
        {
            if(left==right && nums[left]>=target)
            {
                return left;
            }
            if(left==right && nums[left]<target)
            {
                return left+1;
            }
            int mid=((right-left)/2)+left;
            if(target<nums[mid])
            {
                right=mid;
            }
            if(target>nums[mid])
            {
                left=mid+1;
            }
            else if(target==nums[mid])
            {
                return mid;
            }
        }
        return left+1;
    }
};