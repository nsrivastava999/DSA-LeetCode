class Solution
{
    public:
    //Function to count number of ways to reach the nth stair.
    // int countWays(int n)
    // {
    //     if(n==0 || n==1 || n==2)
    //         return n;
    //     return countWays(n-1)+countWays(n-2);
    // }
    int countWays(int n){
        int dp[n+1];
        dp[0]=0;
        dp[1]=1;
        dp[2]=2;
        for(int i=3;i<=n;i++){
            dp[i]=(dp[i-1]+dp[i-2])%1000000007;
        }
        return dp[n];
    }
};