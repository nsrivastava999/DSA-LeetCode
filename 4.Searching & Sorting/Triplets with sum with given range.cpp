class Solution {
  public:
    int countTriplets(int arr[], int n, int l, int r) {
        // code here
        return count(arr,n,r)-count(arr,n,l-1);
    }
    int count(int arr[],int n,int val){
        sort(arr,arr+n);
        int res = 0;
        for(int i=n-1;i>=2;i--){
            int p = 0, q = i-1;
            while(p<q){
                int x = arr[i]+arr[p]+arr[q];
                if(x>val)
                    q--;
                else{
                    res+=(q-p);
                    p++;
                }
            }
        }
        return res;
    }
};