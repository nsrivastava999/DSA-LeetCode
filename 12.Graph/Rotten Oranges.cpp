// Given a grid of dimension nxm where each cell in the grid can have values 0, 1 or 2 which has the following meaning:
// 0 : Empty cell
// 1 : Cells have fresh oranges
// 2 : Cells have rotten oranges

// We have to determine what is the minimum time required to rot all oranges. 
// A rotten orange at index [i,j] can rot other fresh orange at 
// indexes [i-1,j], [i+1,j], [i,j-1], [i,j+1] (up, down, left and right) in unit time. 


class Solution 
{
    public:
    //Function to find minimum time required to rot all oranges. 
    int orangesRotting(vector<vector<int>>& grid) {
        // Code here
        int row[] = {-1,0,0,1};//possible movements
        int col[] = {0,-1,1,0};
        
        queue<pair<int,int>>q;
        int r = grid.size();
        int c = grid[0].size();
        int res = 0, ones = 0;
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(grid[i][j]==2)
                    q.push({i,j});
                else if(grid[i][j]==1)
                    ones++;
            }
        }
        while(!q.empty()){
            int count = q.size();
            if(ones<=0)
                return res;
            res++;
            for(int i=0;i<count;i++){
                int x = q.front().first;
                int y = q.front().second;
                q.pop();
                for(int j=0;j<4;j++){
                    int X = x+row[j];
                    int Y = y+col[j];
                    
                    if(X<0 || X>r-1 || Y<0 || Y>c-1)
                        continue;
                    
                    if(grid[X][Y]==1){
                        grid[X][Y]=2;
                        ones--;
                        q.push({X,Y});
                    }
                }
            }
        }
        return -1;
    }
};
