/*
The structure to use is as follows
struct val{
	int first;
	int second;
};*/

/*You are required to complete this method*/
// bool cmp(val p1,val p2){
//     return p1.first<p1.second;
// }

// int maxChainLen(struct val p[],int n)
// {
//     sort(p,p+n,cmp);
//     int dp[n+1];
//     dp[0] = 1;
//     for(int i=1;i<=n;i++){
//         dp[i] = 1;
//         for(int j=0;j<i;j++){
//             if(p[j].second<p[i].first){
//                 dp[i]=max(dp[i],dp[j]+1);
//             }
//         }
//     }
//     int res=INT_MIN;
//     for(int i=0;i<=n;i++){
//         if(dp[i]>res)
//             res = dp[i];
//     }
//     return res;
// }
bool compare(struct val p1, struct val p2)
{
    return p1.second < p2.second;
}

int maxChainLen(struct val p[], int n)
{
    sort(p, p+n, compare);
    
    int dp[n] = {0};
    dp[0] = 1;

    int count = 1;
    
    for(int i = 1; i < n; i++)
    {
        for(int j = 0; j < i; j++)
        {
            if(p[j].second < p[i].first && dp[i] < dp[j] + 1)
            {
                dp[i] = dp[j] + 1;
                
                count = max(count, dp[i]);
            }
        }
    }
    
    return count;
}