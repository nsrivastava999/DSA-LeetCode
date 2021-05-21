class Solution
{
    public:
    //Function to find the first position with different bits.
    int posOfRightMostDiffBit(int m, int n)
    {
        int x = m^n;
        if(x==0)
            return -1;
        int res = 1;
        while(x>0){
            if(x&1==1)
                return res;
            res++;
            x=x>>1;
        }
        return res;
    }
};