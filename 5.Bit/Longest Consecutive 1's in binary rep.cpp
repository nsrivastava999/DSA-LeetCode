/*  Function to calculate the longest consecutive ones
*   N: given input to calculate the longest consecutive ones
*/
class Solution
{
    public:
    int maxConsecutiveOnes(int N)
    {
        int res=0,temp=0;
        while(N){
            if((N%2)==1){
                temp++;
                res=max(res,temp);
            }
            else
                temp=0;
            N=N>>1;
        }
        return res;
    }
};