class Solution
{
    public:
    //Function to find maximum of each subarray of size k.
    vector <int> max_of_subarrays(int *arr, int n, int k)
    {
        // your code here
        // vector<int>res;
        // deque<int>dq;
        // int i;
        // for(i=0;i<k;i++){//for first k elements
        //     while(!dq.empty() && arr[dq.back()]<=arr[i])
        //         dq.pop_back();
        //     dq.push_back(arr[i]);
        // }
        // for(i=k;i<n;i++){
        //     res.push_back(arr[dq.front()]);//prev window elements
            
        //     while(!dq.empty() && dq.front()<=(i-k))//out of window elements
        //         dq.pop_front();
                
        //     while(!dq.empty() && arr[dq.back()]<=arr[i])
        //         dq.pop_back();
        //     dq.push_back(i);
        // }
        // res.push_back(arr[dq.front()]);
        // return res;
        deque<int> dq;
        for(int i = 0; i < min(k, n); i++)
        {
            while(!dq.empty() and arr[i] >= arr[dq.back()])
            {
                dq.pop_back();
            }
            
            dq.push_back(i);
        }
        vector<int> res;
        for(int i = k; i < n; i++)
        {
            res.push_back(arr[dq.front()]);
            
            while(!dq.empty() and (i - k) >= dq.front())
            {
                dq.pop_front();
            }
            while(!dq.empty() and arr[i] >= arr[dq.back()])
            {
                dq.pop_back();
            }
            dq.push_back(i);
        }
        
        res.push_back(arr[dq.front()]);
        
        return res;
    }
};