class Solution{
    public:
        /*You are required to complete this method */
    int atoi(string str)
    {
        int n = str.length();
        int res = 0, i=0;
        bool flag = false;
        if(str[0]=='-'){
            i = 1;
            flag = true;
        }
        for(;i<n;i++){
            if(str[i]-'0'>=0 && str[i]-'0'<=9){
                res = (res*10 + (str[i]-'0'));
            }
            else
                return -1;
        }
        if(flag)
            return -res;
        else
            return res;
    }
};