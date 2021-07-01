class Solution{
    public:
    // A1[] : the input array-1
    // N : size of the array A1[]
    // A2[] : the input array-2
    // M : size of the array A2[]
    
    //Function to sort an array according to the other array.
    vector<int> sortA1ByA2(vector<int> arr1, int n, vector<int> arr2, int m) 
    {
        //Your code here
        vector<int>res;
        map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[arr1[i]]++;
        }
        for(int i=0;i<m;i++){
            if(mp.find(arr2[i])!=mp.end()){
                int x = mp[arr2[i]];
                while(x--){
                    res.push_back(arr2[i]);
                    mp[arr2[i]]--;
                }
            }
        }
        for(auto i:mp){
            int x = i.second;
            while(x--){
                res.push_back(i.first);
            }
        }
        return res;
    } 
    
};