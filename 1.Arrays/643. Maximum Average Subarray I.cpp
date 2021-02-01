class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        // using sliding window technique
        double summ=0;
        double res=0;
        for(int i=0;i<k;i++){
            summ+=nums[i];
        }
        res=summ;
        for(int i=k;i<nums.size();i++){
            summ+=(nums[i]-nums[i-k]);
            res=max(res,summ);
        }
        return res/k;
    }
};