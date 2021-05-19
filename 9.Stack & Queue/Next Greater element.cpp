class Solution
{
    public:
    //Function to calculate the span of stockâ€™s price for all n days.
    vector <int> calculateSpan(int arr[], int n)
    {
        vector<int>res;
        stack<int>s;
        s.push(0);
        res.push_back(1);
        for(int i=1;i<n;i++){
            while(!s.empty() && arr[s.top()]<=arr[i])
                s.pop();
            if(s.empty())
                res.push_back(i+1);
            else
                res.push_back(i-s.top());
            s.push(i);
        }
        return res;
    }
};