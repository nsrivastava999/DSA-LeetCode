class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n=nums.size();
        //hashing based O(n) with O(n) A.S.
        // unordered_set<int>s;
        // for(int i=0;i<n;i++){
        //     if(s.find(nums[i])!=s.end()){
        //         s.erase(nums[i]);
        //     }
        //     else
        //         s.insert(nums[i]);
        // }
        // return *s.begin();
        // Using Bit manipulation for O(n) with O(1) A.S.
        int a=0;
        for(int i=0;i<n;i++){
            a^=nums[i];
        }
        return a;
    }
};