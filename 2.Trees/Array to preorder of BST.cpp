class Solution {
public:

    void helper(vector<int>&nums,vector<int>&res,int s,int e,int &index){
        if(s<=e){
            int mid = (s+e)/2;
            res[index++] = nums[mid];
            helper(nums,res,s,mid-1,index);
            helper(nums,res,mid+1,e,index);
        }
        
    }
    
    vector<int> sortedArrayToBST(vector<int>& nums) {
        // Code here
        vector<int>res(nums.size(),0);
        int index = 0;
        helper(nums,res,0,nums.size()-1,index);
        return res;
        
    }
};
