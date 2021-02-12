class Solution {
public:
    int mySqrt(int x) {
        int l=0, h=x, m;
        while(l<=h)
        {
            m = l+(h-l)/2;
            long sqr = long(m)*long(m);
            if(sqr == x) return m;
            if(sqr > x) h = m-1;
            else l = m+1;
        }
        return h;  
    }
};