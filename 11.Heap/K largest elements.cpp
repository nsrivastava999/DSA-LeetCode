class Solution
{
    public:
    //Function to return k largest elements from an array.
    vector<int> kLargest(int arr[], int n, int k)
    {
        priority_queue<int>pq;
        vector<int>res;
        for(int i=0;i<n;i++)
            pq.push(arr[i]);
        for(int i=0;i<k;i++){
            if(!pq.empty()){
                res.push_back(pq.top());
                pq.pop();
            }
            
        }
        return res;
    }
};