class Solution {
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& M) {
        //T.C. is O(1) as traversing through all the elements once only
        int m=M.size();
        int n=M[0].size();
        vector<vector<int>>res(m,vector<int> (n));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                int count = 0;
                for (int nr = i-1; nr <= i+1; nr++)
                    for (int nc = j-1; nc <= j+1; nc++) {
                        if (nr>=0 && nr<m && nc>=0 && nc<n) {
                            res[i][j] += M[nr][nc];
                            count++;
                        }
                    }
                res[i][j] /= count;
            }
        }
        return res;
    }
};