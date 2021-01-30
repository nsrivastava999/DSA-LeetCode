//Given an array of integers and an integer k, 
// find out whether there are two distinct indices i and j in the array such that nums[i] = nums[j] 
// and the absolute difference between i and j is at most k.
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        int n=nums.size();
        if(n<=0)
            return false;
        for(int i=0;i<n;i++){
            if(mp.find(nums[i])!=mp.end()){
                int x=mp[nums[i]];
                if(abs(x-i)<=k)
                    return true;
                else{
                    mp.erase(nums[i]);
                    mp.insert({nums[i],i}); //delete previous one and insert new
                }
            }
            else{
                mp[nums[i]]=i;
            }
        }
        return false;
    }
};