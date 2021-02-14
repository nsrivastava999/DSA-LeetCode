class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n=matrix.size(),m=matrix[0].size();
        vector<int>res;
        if(n==0)
            return res;
        int top=0,bottom=n-1,left=0,right=m-1;
        int dir=0;
        while(top<=bottom && left<=right){
            if(dir==0){
                for(int i=left;i<=right;i++)
                    res.push_back(matrix[top][i]);
                top++;
            }
            if(dir==1){
                for(int j=top;j<=bottom;j++)
                    res.push_back(matrix[j][right]);
                right--;
            }
            if(dir==2){
                for(int i=right;i>=left;i--)
                    res.push_back(matrix[bottom][i]);
                bottom--;
            }
            if(dir==3){
                for(int j=bottom;j>=top;j--)
                    res.push_back(matrix[j][left]);
                left++;
            }
            dir=(dir+1)%4;
        }
        return res;
    }
};