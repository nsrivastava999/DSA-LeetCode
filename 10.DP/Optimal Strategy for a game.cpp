// You are given an array A of size N. The array contains integers and is of even length. The elements of the array represent N coin of values V1, V2, ....Vn. You play against an opponent in an alternating way.

// In each turn, a player selects either the first or last coin from the row, removes it from the row permanently, and receives the value of the coin.

// You need to determine the maximum possible amount of money you can win if you go first.
// Note: Both the players are playing optimally.

//Function to find the maximum possible amount of money we can win.
long long maximumAmount(int arr[], int n) 
{
    // Your code here
    int dp[n][n];
    
    for(int i=0;i+1<n;i++)
        dp[i][i+1] = max(arr[i],arr[i+1]);
        
    for(int gap=3;gap<n;gap+=2){
        for(int i=0;i+gap<n;i++){
            int j = i+gap;
            
            dp[i][j] = max(arr[i]+min(dp[i+2][j],dp[i+1][j-1]),arr[j]+min(dp[i+1][j-1],dp[i][j-2]));
        }
    }
    
    return dp[0][n-1];
}