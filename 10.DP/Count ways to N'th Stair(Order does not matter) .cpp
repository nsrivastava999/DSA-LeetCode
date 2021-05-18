class Solution
{
    public:
    //Function to count number of ways to reach the nth stair 
    //when order does not matter.
    // long long countWays(int m)
    // {
    //     return m/2 + 1;
    // }
    long long countWays(int m)
    {
        long long dp[m+1];
    
        dp[0] = 1;
        dp[1] = 1;
        
        for(int i = 2; i <= m; i++)
        {
            dp[i] = (dp[1] + dp[i-2])%1000000007;
        }
        // Because for each dp[i] item we have 1 + 1 +...+ i as a way to get i. So for every item we add this as a possible way.
        return dp[m];
    }
};