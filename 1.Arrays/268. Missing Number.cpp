class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        //hashing based O(n) with O(n) A.S. solution:
        // set<int>s;
        // for(int i=0;i<n;i++){
        //     s.insert(nums[i]);
        // }
        // for(int i=0;i<=n;i++){
        //     if(s.find(i)==s.end())
        //         return i;
        // }
        //Maths based O(n) with O(1) A.S.
        int actual_sum = (n*(n+1))/2;
        int calc_sum=0;
        for(int i=0;i<n;i++){
            calc_sum+=nums[i];
        }
        return actual_sum-calc_sum;
    }
};