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
};