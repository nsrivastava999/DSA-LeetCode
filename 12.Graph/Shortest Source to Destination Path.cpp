// Given a 2D binary matrix A(0-based index) of dimensions NxM. 
// Find the minimum number of steps required to reach from (0,0) to (X, Y).
// Note: You can only move left, right, up and down, and only through cells that contain 1.

class Solution {
  public:
    int shortestDistance(int N, int M, vector<vector<int>> matrix, int X, int Y) {
        // code here
        if(matrix[0][0] == 0 || matrix[X][Y] == 0)
            return -1;
        vector<pair<int,int>>moves = {{0,1},{0,-1},{1,0},{-1,0}};
        vector<vector<int>> dist(N, vector<int>(M, INT_MAX));
        
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        pq.push({0,0});
        dist[0][0] = 0;
        
        while(!pq.empty()){
            int currX = pq.top().first;
            int currY = pq.top().second;
            pq.pop();
            
            for(auto move:moves){
                int x = currX+move.first;
                int y = currY+move.second;
                
                if(x>=0 && x<N && y>=0 && y<M && matrix[x][y]==1 && 
                dist[x][y]>dist[currX][currY]+1){
                    dist[x][y] = dist[currX][currY]+1;
                    pq.push({x,y});
                }
            }
        }
        return dist[X][Y]!=INT_MAX ? dist[X][Y] : -1;
    }
};
