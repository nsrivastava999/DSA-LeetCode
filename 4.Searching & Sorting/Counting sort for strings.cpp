class Solution{
    public:
    //Function to arrange all letters of a string in lexicographical 
    //order using Counting Sort.
    string countSort(string arr){
        vector<int>count(256,0);
        string res;
        for(int i=0;i<arr.length();i++)
            count[arr[i]]++;
        for(int i=0;i<256;i++){
            while(count[i]--){
                res+=(char)i;
            }
        }
        return res;
    }
};