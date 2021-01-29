class Solution {
public:
    int maxSubArray(vector<int>& arr) {
        int maxend=arr[0];
        int res=arr[0];
        for(int i=1;i<arr.size();i++){
            maxend=max(arr[i],maxend+arr[i]);
            res=max(maxend,res);
        }
        return res;
    }
};