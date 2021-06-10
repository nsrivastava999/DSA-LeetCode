class Solution
{
    public:
    //Function to print kth largest element for each element in the stream.
    void kthLargest(int arr[], int n, int k)
    {
        // for(int i=0;i<k-1;i++)
        //     cout<<-1<<" ";
        priority_queue<int,vector<int>,greater<int>>pq;
        for(int i=0;i<k;i++){
            pq.push(arr[i]);
            if(i < k-1)
                cout<<-1<<" ";
            else
                cout<<pq.top()<<" ";
        }
            // pq.push(arr[i]);
            
        for(int i=k;i<n;i++){
            if(pq.top()<arr[i]){
                pq.pop();
                pq.push(arr[i]);
            }
            cout<<pq.top()<<" ";
            
        }
    }

    //another method
    vector<int> kthLargest(int k, int arr[], int n) {
        // code here
        vector<int>res;
        priority_queue<int,vector<int>,greater<int>>pq;
        for(int i=0;i<n;i++){
            int x;
            if(i<k)
                pq.push(arr[i]);
            else{
                if(pq.top()<arr[i]){
                    // x = pq.top();
                    pq.pop();
                    pq.push(arr[i]);
                }
            }
            if(pq.size()<k)
                res.push_back(-1);
            else
                res.push_back(pq.top());
                
        }
        // res.push_back(pq.top());
        // pq.pop();
        return res;
    }
};