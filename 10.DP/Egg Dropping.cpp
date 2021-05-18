class Solution
{
    public:
    //Function to find minimum number of attempts needed in 
    //order to find the critical floor.
    // int eggDrop(int e, int f) 
    // {
    //     if(e==1)
    //         return f;
    //     if(f==1)
    //         return 1;
    //     if(f==0)
    //         return 0;
    //     int res = INT_MAX;
    //     for(int i=1;i<=f;i++){
    //         res = min(res,max(eggDrop(e-1,i-1),eggDrop(e,f-i)))+1;
    //     }
    //     return res;
    // }
    int eggDrop(int e, int f) 
    {
        // int dp[f+1][e+1];
        
        // for(int i=1;i<=e;i++){
        //     dp[0][i]=0;
        //     dp[1][i]=1;
        // }
        // for(int i=1;i<=f;i++)
        //     dp[i][1]=i;
        // for(int i=2;i<=f;i++){
        //     for(int j=2;j<=e;j++){
        //         dp[i][j]=INT_MAX;
        //         for(int x=1;x<=i;x++){
        //             dp[i][j] = min(dp[i][j],1+max(dp[i-1][j-1],dp[i-x][j]));
        //         }
        //     }
        // }
        // return dp[f][e];
        int dp[f+1][e+1];
    
        for(int i = 1; i <= e ;i++){
            dp[1][i] = 1;
            dp[0][i] = 0;
        }
        
        for(int j = 1; j <= f; j++){
            dp[j][1] = j;
        }
        
        for(int i = 2; i <= f; i++){
            for(int j = 2; j <= e; j++){
                dp[i][j] =INT_MAX;
                for(int x = 1; x <= i; x++){
                    dp[i][j] = min(dp[i][j], 1 + max(dp[x-1][j-1], dp[i-x][j]));
                }
            }
        }
        
        return dp[f][e];
    }
};