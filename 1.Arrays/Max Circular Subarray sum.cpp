// Given an array arr[] of N integers arranged in a circular fashion. 
// Your task is to find the maximum contiguous subarray sum.


class Solution{
    public:
    // arr: input array
    // num: size of array
    //Function to find maximum circular subarray sum.
    int normalMaxSum(int arr[], int n){//normal max sum using kadane's algo
        int res = arr[0];
        int maxend = arr[0];
        for(int i=1;i<n;i++){
            maxend = max(arr[i],maxend+arr[i]);
            res = max(maxend,res);
        }
        return res;
    }
    
    int circularSubarraySum(int arr[], int n){
        
        int normal = normalMaxSum(arr,n);
        if(normal<0)// if no positive sum possible
            return normal;
        int sum = 0;
        
        //for  cicular sum, we will subtract the smallest sum possible from the arr sum
        for(int i=0;i<n;i++){
            sum+=arr[i];
            arr[i] = -arr[i];
        }
        int maxCircular = sum+normalMaxSum(arr,n);
        return max(normal,maxCircular);
    }
};