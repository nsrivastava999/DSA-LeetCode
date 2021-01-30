class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n= nums.size();
        if(!n || n==1)
            return;
        k= k%n;
        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin()+k);
        reverse(nums.begin()+k, nums.end());
        
        return;
    }
};