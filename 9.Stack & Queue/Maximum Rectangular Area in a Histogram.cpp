class Solution
{
    public:
    //Function to find largest rectangular area possible in a given histogram.
    long long getMaxArea(long long arr[], int n)
    {
        stack<long long>s;
        long long res = 0;
        for(int i=0;i<n;i++){
            while(!s.empty() && arr[s.top()]>=arr[i]){
                long long tp = s.top();
                s.pop();
                long long curr = arr[tp] * (s.empty() ? i : i-s.top()-1);
                res = max(res,curr);
            }
            s.push(i);
        }
        while(!s.empty()){
            long long tp = s.top();
            s.pop();
            long long curr = arr[tp] * (s.empty() ? n : (n-s.top()-1));
            res = max(res,curr);
        }
        return res;
    }
};