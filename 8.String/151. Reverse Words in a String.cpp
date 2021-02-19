class Solution {
public:
    string reverseWords(string s) {
        int n = s.length();
        s = regex_replace(s,regex("^ +| +$|( ) +"), "$1");//for removing extra spaces
        int start=0,end;
        for(end=0;end<n;end++){
            if(s[end]==' '){
                reverse(s.begin()+start,s.begin()+end);
                start=end+1;
            }
        }
        reverse(s.begin()+start,s.end());
        reverse(s.begin(),s.end());
        return s;
    }
};