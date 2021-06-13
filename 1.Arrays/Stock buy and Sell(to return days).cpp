class Solution{
public:
    //Function to find the days of buying and selling stock for max profit.
    vector<vector<int> > stockBuySell(vector<int> arr, int n){
        // code here
        stack<int>s;
        vector<vector<int>>res;
        if(n==1)
            return res;
        int i=0;
        while(i<n){
            vector<int>temp;
            while((i+1)<n && arr[i+1]<=arr[i])//to find local minima
                i++;
            if(i==n-1)//no min found
                break;
            temp.push_back(i);//pushing local minima as buying day    
            i++;
            while(i<n && arr[i]>=arr[i-1])//to find local  maxima
                i++;
            temp.push_back(i-1);//pushing local maxima as selling day
            
            res.push_back(temp);
            // i++;
        }
        return res;
    }
};