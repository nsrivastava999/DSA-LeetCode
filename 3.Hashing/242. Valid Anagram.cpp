class Solution {
public:
    bool isAnagram(string s, string t) {
        int count[256]={0};
        int m=s.length();
        int n=t.length();
        if(m!=n)
            return false;
        for(int i=0;i<m;i++){
            count[s[i]]++;
        }
        for(int i=0;i<n;i++){
            count[t[i]]--;
        }
        for(int i=0;i<256;i++)
            if(count[i]!=0)
                return false;
        return true;
    }
};