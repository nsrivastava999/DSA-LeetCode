/* The function returns 1 if
IP string is valid else return 0
You are required to complete this method */
class Solution {
    public:
        int isValid(string s) {
            // code here
            int count=0;
            for(int i=0;i<s.length();i++)
            {
                if(s[i]=='.') count++;
            }
            if(count!=3) 
                return 0;
            int i=0,y=0;
            if(s=="0.0.0.0") 
                return 1;
            for(int i=0;i<s.length();i++)
            {
                if(!((s[i]>='0' && s[i]<='9' )|| s[i]=='.' ))
                    return 0;
            }
            while(true)
            {
                int x=0,y=0;
                if(i>=s.length()-1) return 1;
                if(s[i]=='.' || (s[i]=='0' && s[i+1]!='.') )
                {
                    return 0;
                }
                 while(s[i]!='.'&& i<s.length())
                {
                    y++;
                    x=x*10+(s[i]-'0');
                    i++;
                    if(y>3)
                        return 0;
                }
                i++;
                if(x>255 )
                {
                    return 0;
                }
             
            }
        }
};