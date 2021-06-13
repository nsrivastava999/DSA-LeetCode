
// arr : given vector of elements
// target : given sum value

class Solution{
  public:
    int threeSumClosest(vector<int> arr, int target) {
        // Your code goes here
        sort(arr.begin(),arr.end());
        int n = arr.size();
        int res;
        bool first = true;
        for(int i=0;i<n-2;i++){
            int l=i+1,r=n-1;
            while(l<r){
                int x = arr[i]+arr[l]+arr[r];
                if(first){
                    res = x;
                    first = false;
                }
                if(abs(x-target)<abs(res-target)){
                    res = x;
                }
                else if(abs(x-target)==abs(res-target)){
                    if(x>res)
                        res = x;
                }
                if(target>x)
                    l++;
                else
                    r--;
            }
        }
        return res;
    }
};

