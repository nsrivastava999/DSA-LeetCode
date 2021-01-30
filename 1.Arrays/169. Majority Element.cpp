class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int res=0,count=1;
        int n=nums.size();
        //1st loop for finding the most occured element and getting its index in res
        for(int i=1;i<n;i++){
            if(nums[res]==nums[i])
                count++;
            else
                count--;
            if(count==0){
                res=i;
                count=1;
            }
        }
        // count=0;
        //2nd loop for checking whether it occurs more than n/2 times but since its given in que so commenting it out.
        // for(int i=0;i<n;i++){
        //     if(nums[i]==nums[res])
        //         count++;
        // }
        // if(count>(n/2))
        //     return nums[res];
        // else
        //     return -1;
        return nums[res];
    }
};