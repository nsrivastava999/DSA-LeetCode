class Solution {
  public:
    int findPosition(int N) {
        int res=0,index=-1,i=0;
        while(N>0){
            i++;
            if(N&1==1){
                res++;
                if(index==-1)
                    index=i;
            }
            N=N>>1;
            
        }
        if(res>1)
            return -1;
        return index;
    }
};