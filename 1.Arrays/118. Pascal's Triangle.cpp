class Solution {
public:
    vector<vector<int>> generate(int rows) 
    {
        if(rows == 0)
            return vector<vector<int>>();
        
        vector<vector<int>> res(rows);
        
        res[0].push_back(1);
        
        // Each triangle element (other than the first and last of each row)
        // is equal to the sum of the elements above-and-to-the-left and
        // above-and-to-the-right.
        for(int i=1; i<rows; i++)
        {
            res[i].push_back(1);
            
            for(int j=1; j<i; j++)
                res[i].push_back(res[i-1][j-1] + res[i-1][j]);
            
            res[i].push_back(1);
        }
        
        return res;
    }
};