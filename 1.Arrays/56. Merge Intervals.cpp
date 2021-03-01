class Solution {
public:
    // bool cmp(vector<int>a,vector<int>b){
    //     return a[0]<b[0];
    // }
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        if(intervals.size()<1)
            return intervals;
        sort(intervals.begin(),intervals.end());
        vector<vector<int>>res;
        res.push_back(intervals[0]);
        int index=0;
        for(int i=1;i<intervals.size();i++){
            if(res[index][1]>=intervals[i][0]){
                res[index][0]=min(res[index][0],intervals[i][0]);
                res[index][1]=max(res[index][1],intervals[i][1]);
            }
            else{
                index++;
                res.push_back(intervals[i]);
            }
        }
        return res;
    }
};