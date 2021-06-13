// Given a binary array arr of size N and an integer M.
// Find the maximum number of consecutive 1's produced by flipping at most M 0's.

class Solution{
public:
    // m is maximum of number zeroes allowed to flip
    // n is size of array
    int findZeroes(int arr[], int n, int m) {
        // code here
        int left = 0, right = 0, zeros = 0,res = 0;
        for(right=0;right<n;right++){
            if(arr[right]==0)
                zeros++;
            if(zeros<=m){
                res = max(res,right-left+1);
            }
            else{
                while(zeros>m){
                    if(arr[left]==0)
                        zeros--;
                    left++;
                }
            }
            
        }
        return res;
    }  
};