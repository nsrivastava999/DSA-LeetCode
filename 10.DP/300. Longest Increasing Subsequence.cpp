class Solution {
public:
    //for calculating index of ceil value of current element
    int ceilIndex(int tail[],int l, int r, int x){
        int m;
        while(l<r){
            m=(l+r)/2;
            if(tail[m]>=x)
                r=m;
            else
                l=m+1;
        }
        return r;
    }
    int lengthOfLIS(vector<int>& nums) {
        //O(n^2) solution using DP 
        /*
        int n = nums.size();
        int dp[n];
        dp[0]=1;
        for(int i=0;i<n;i++){
            dp[i]=1;
            for(int j=0;j<i;j++){
                if(nums[j]<nums[i]){
                    dp[i]=max(dp[j]+1,dp[i]);
                }
            }
        }
        int res = *max_element(dp,dp+n);
        return res;
        */
        //O(nlogn) solution using Binary Search
        int n=nums.size();
        if(n==0)
            return 0;
        int tail[n];
        tail[0]=nums[0];
        int len=1;
        for(int i=0;i<n;i++){
            if(nums[i]>tail[len-1]){
                tail[len++]=nums[i];
            }
            else{
                int c = ceilIndex(tail,0,len,nums[i]);
                tail[c]=nums[i];
            }
        }
        return len;
    }
};