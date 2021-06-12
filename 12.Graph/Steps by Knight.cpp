// Given a square chessboard, the initial position of Knight and position of a target. 
// Find out the minimum steps a Knight will take to reach the target position.

class Solution 
{
    public:
    //Function to find out minimum steps Knight needs to reach target position.
	int minStepToReachTarget(vector<int>&KnightPos,vector<int>&TargetPos,int N)
	{
	    // Code here
	    int row[] = {-1,1,2,2,1,-1,-2,-2};
	    int col[] = {2,2,1,-1,-2,-2,-1,1};
	    
	    queue<pair<pair<int,int>,int>>q; //pair with location reached and no. of jumps
	    vector<vector<int>>visited(N,vector<int>(N));
	    q.push({{KnightPos[0],KnightPos[1]},0});
	    visited[KnightPos[0]-1][KnightPos[1]-1]=1;
	    while(!q.empty()){
	        auto front = q.front();
	        q.pop();
	        if(front.first.first == TargetPos[0] && front.first.second == TargetPos[1])
	            return front.second;
	        for(int i=0;i<8;i++){
	            int x = row[i]+front.first.first;
	            int y = col[i]+front.first.second;
	            if(x>0 && x<=N && y>0 && y<=N && visited[x-1][y-1]==0){
	                visited[x-1][y-1]=1;
	                q.push({{x,y},front.second+1});
	            }
	        }
	    }
	    return -1;
	}
};