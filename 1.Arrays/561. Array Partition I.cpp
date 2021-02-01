// Given an integer array nums of 2n integers, group these integers into n pairs (a1, b1), (a2, b2), ..., (an, bn) 
// such that the sum of min(ai, bi) for all i is maximized. Return the maximized sum.
class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        //O(nlogn)
        sort(nums.begin(),nums.end());
        int res=0;
        for(int i=0;i<nums.size();i+=2){
            res+=nums[i];
        }
        return res;
    }
};
